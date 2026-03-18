#include "../../../includes/cube/form/Face.hpp"

/* ================= [ Constructor ] ================= */

Face::Face(std::string emplacement, std::string color): initEmplacement(emplacement), emplacement(emplacement), color(color) {
	std::cout << "🟦 A new Face has been created!" << std::endl;
}

Face::~Face() {
	std::cout << "💥 A Face has been destroyed!" << std::endl;
}

/* ==================== [ Utils ] ==================== */

std::string	Face::getInitEmplacement() {
	return (this->initEmplacement);
}

std::string	Face::getEmplacement() {
	return (this->emplacement);
}

std::string	Face::getColor() {
	return (this->color);
}
