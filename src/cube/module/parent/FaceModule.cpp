#include "../../../../includes/cube/module/parent/FaceModule.hpp"
#include "../../../../includes/cube/Puzzle.hpp"

/* ================= [ Constructor ] ================= */

FaceModule::FaceModule(Puzzle *puzzle): puzzle(puzzle) {
	std::cout << "✨ A new face has been created!" << std::endl;
}

FaceModule::~FaceModule() {
	std::cout << "✨ A face has been deleted!" << std::endl;
}

/* ==================== [ Utils ] ==================== */

void	FaceModule::initSpins(int sides) {
	this->spins.reserve(sides + 1);

	for (int n = 0; n < sides + 1; n++) {
		this->spins.emplace_back();
	}
}
