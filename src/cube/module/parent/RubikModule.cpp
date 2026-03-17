#include "../../../../includes/cube/module/parent/RubikModule.hpp"
#include "../../../../includes/cube/Puzzle.hpp"

/* ================= [ Constructor ] ================= */

RubikModule::RubikModule(Puzzle *puzzle): puzzle(puzzle) {
	std::cout << "🎉 RubikModule has been created for this puzzle!" << std::endl;

	createCube();
}

RubikModule::RubikModule(Puzzle *puzzle, int sides): puzzle(puzzle), sides(sides) {
	std::cout << "🎉 RubikModule has been created for this puzzle!" << std::endl;

	createCube();
}

RubikModule::~RubikModule() {
	std::cout << "🎉 RubikModule destroyed!" << std::endl;
}

/* ==================== [ Utils ] ==================== */

void	RubikModule::createCube() {
	this->faces.reserve(puzzle->getFace());

	for (int n = 0; n < puzzle->getFace(); n++) {
		this->faces.emplace_back(puzzle);
	}

	for (auto& face : this->faces) {
		face.initSpins(this->sides);
	}
}

/* =================== [ Getters ] =================== */

std::vector<FaceModule>	&RubikModule::getFaces() {
	return (this->faces);
}

int	RubikModule::getSides() {
	return (this->sides);
}
