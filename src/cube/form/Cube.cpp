#include "../../../includes/cube/form/Cube.hpp"

/* ================= [ Constructor ] ================= */

Cube::Cube(std::map<std::string, std::string> emplacementColor) {
	std::cout << "🟦 A new Cube has been created!" << std::endl;

	for (const auto& [emplacement, color] : emplacementColor) {
		// this->faces.emplace_back(new Face(emplacement, color));
		std::cout << "DEBUG: emplacement = " << emplacement << " | color = " << color << std::endl;
	}
}

Cube::~Cube() {
	std::cout << "💥 A Cube has been destroyed!" << std::endl;
}

/* ==================== [ Utils ] ==================== */

std::vector<Face>	Cube::getFaces() {
	return (this->faces);
}
