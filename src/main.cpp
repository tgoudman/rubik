#include "../includes/parsing/Parsing.hpp"
#include "../includes/cube/Puzzle.hpp"

int main(int argc, char **argv) {

	try {
		Parsing parsing(argc, argv);
		const auto &actions = parsing.getActions();

		for (size_t i = 0; i < actions.size(); i++) {
			std::cout << "Step " << i << " = " << actions[i] << std::endl;
		}

		Puzzle puzzle({'Y', 'B', 'R', 'G', 'W', 'O'});

	} catch (const std::runtime_error& e) {
		std::cout << "Error : " << e.what() << std::endl;
		return (1);
	}

	return (0);
}
