CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -I includes -std=c++17

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = .

NAME = rubik

# Récupère tous les fichiers .cpp dans src et ses sous-dossiers
SRCS = $(shell find $(SRC_DIR) -name "*.cpp")
# Transforme les chemins src/.../*.cpp -> obj/.../*.o
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Cible principale
all: $(BIN_DIR)/$(NAME)

bonus: CXXFLAGS += -D__BONUS__
bonus: LDFLAGS += -lglfw -lGL
bonus: re

$(BIN_DIR)/$(NAME): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LDFLAGS)

# Compilation des .cpp en .o, création des sous-dossiers si nécessaire
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Création des dossiers obj et bin si inexistants
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Nettoyage des objets
clean:
	rm -rf $(OBJ_DIR)

# Nettoyage complet
fclean: clean
	rm -rf $(BIN_DIR)/$(NAME)

# Recompile tout
re: fclean all

.PHONY: all clean fclean re
