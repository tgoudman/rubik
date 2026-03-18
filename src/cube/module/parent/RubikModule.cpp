#include "../../../../includes/cube/module/parent/RubikModule.hpp"
#include "../../../../includes/cube/Puzzle.hpp"

/* ================= [ Constructor ] ================= */

RubikModule::RubikModule(Puzzle *puzzle): puzzle(puzzle) {
	std::cout << "🎉 RubikModule has been created for this puzzle!" << std::endl;

	createCube();
}

RubikModule::RubikModule(Puzzle *puzzle, int face, int sides, int cube, int sideCube, int spin): puzzle(puzzle), face(face), sides(sides), cube(cube), sideCube(sideCube), spin(spin) {
	std::cout << "🎉 RubikModule has been created for this puzzle!" << std::endl;

	createCube();
}

RubikModule::~RubikModule() {
	std::cout << "🎉 RubikModule destroyed!" << std::endl;
}

/* ==================== [ Utils ] ==================== */

void	RubikModule::cubeCreation(std::map<std::string, std::string> moveColor) {
	this->cubes.reserve(this->cube);

	for ()
}

void	RubikModule::createCube() {
	this->faces.reserve(this->face);
	for (int n = 0; n < this->face; n++) {
		this->faces.emplace_back(puzzle);
	}

	for (auto& face : this->faces) {
		face.initSpins(this->spin);
	}
}

/* =================== [ Getters ] =================== */

std::vector<FaceModule>	&RubikModule::getFaces() {
	return (this->faces);
}

int	RubikModule::getSides() {
	return (this->sides);
}
