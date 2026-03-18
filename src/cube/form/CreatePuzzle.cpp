#include "../../../includes/cube/form/CreatePuzzle.hpp"

/* ================= [ Constructor ] ================= */

CreatePuzzle::CreatePuzzle(std::map<std::string, std::string> mvColorMap) {
	for (const auto test : mvColorMap) {
		std::cout << "debug" << std::endl;
	}
}

CreatePuzzle::~CreatePuzzle() {}

/* ==================== [ Utils ] ==================== */
