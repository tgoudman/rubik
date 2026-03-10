#include "../includes/Parsing.hpp"
#include "../includes/Cube.hpp"

int main(int argc, char **argv) {

	try {
		Parsing parsing(argc, argv);
		const auto &actions = parsing.getActions();

		for (size_t i = 0; i < actions.size(); i++) {
			std::cout << "Step " << i << " = " << actions[i] << std::endl;
		}

		Cube cube({'Y', 'B', 'R', 'G', 'W', 'O'}, 9);

	} catch (const std::runtime_error& e) {
		std::cout << "Error : " << e.what() << std::endl;
		return (1);
	}

	return (0);
}
