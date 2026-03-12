CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -I includes

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = .

NAME = rubik

SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

all: $(BIN_DIR)/$(NAME)

bonus: CXXFLAGS += -D__BONUS__ -I includes/glm
bonus: LDFLAGS += -lglfw -lGL -lGLEW
bonus: re

$(BIN_DIR)/$(NAME): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(BIN_DIR)/$(NAME)

re: fclean all

.PHONY: all clean fclean re
