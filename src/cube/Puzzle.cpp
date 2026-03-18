#include "../../includes/cube/Puzzle.hpp"

/* ================= [ Constructor ] ================= */

Puzzle::Puzzle(std::vector<char> colors): colors(colors) {
	createPuzzle();
}

Puzzle::Puzzle(int face, int pieces, int corner, std::vector<char> colors): face(face), pieces(pieces), corner(corner), colors(colors) {
	createPuzzle();
}

Puzzle::~Puzzle() {
	delete(this->module);
}

/* ==================== [ Utils ] ==================== */

void Puzzle::createPuzzle() {
	this->module = new BasicCube(this);
}

/* =================== [ Getters ] =================== */

int Puzzle::getFace() const {
	return (this->face);
}

int Puzzle::getPieces() const {
	return (this->pieces);
}

int Puzzle::getCorner() const {
	return (this->corner);
}

RubikModule	*Puzzle::getModule() {
	return (this->module);
}
