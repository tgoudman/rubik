#include "../includes/Parsing.hpp"

int main(int argc, char **argv) {

	try {
		Parsing *parsing = new Parsing(argc, argv);

		for (size_t i = 0; i < parsing->getActions().size(); i++) {
			std::cout << "Step " << i << " = " << parsing->getActions()[i] << std::endl;
		}

	} catch (const std::runtime_error& e) {
		std::cout << "Error : " << e.what() << std::endl;
	}

	return (0);
}
