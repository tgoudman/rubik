#include "../includes/Cube.hpp"

Cube::~Cube() {}

Cube::Cube(std::vector<char> colors, int cubes) : rubik(colors.size() , std::vector<char>(cubes, ' ')), colors(colors), cubes(cubes) {
	for (size_t n = 0; n < this->rubik.size(); n++) {
		this->rubik[n] = std::vector<char>(cubes, this->colors[n]);
	}

	printCube();
}

void Cube::printCube() const {
	int square = static_cast<int>(sqrt(cubes));

	if (square * square != cubes) std::cout << "WARNING: Your print is not official visual !" << std::endl;

	for (size_t n = 0; n < this->rubik.size(); n++) {
		std::cout << "Face = " << this->rubik[n][0] << std::endl;
		for (size_t c = 0; c < this->rubik[n].size(); c++) {
			std::cout << "[" << this->rubik[n][c] << "]";
			if ((c + 1) % square == 0) std::cout << std::endl;
			else if (c + 1 < this->rubik[n].size()) std::cout << ",";
		}
		if (n < this->rubik.size() - 1) std::cout << std::endl;
	}
}
