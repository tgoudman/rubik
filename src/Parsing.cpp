#include "../includes/Parsing.hpp"

Parsing::~Parsing() {}

Parsing::Parsing(int argc, char **argv) {

	if (argc < 2)
		throw std::runtime_error("Invalid number of arguments !");

	std::stringstream ss(argv[1]);
	std::string word;

	while (ss >> word) {
		this->actions.push_back(word);
	}

	for (const auto& a : actions) {
		if (std::find(this->accepts.begin(), this->accepts.end(), a) == this->accepts.end()) {
			throw std::runtime_error("Invalid argument !");
		}
	}
}

const std::vector<std::string> Parsing::getActions() {
	return (this->actions);
}
