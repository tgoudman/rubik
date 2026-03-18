#include "../../includes/cube/Puzzle.hpp"

/* ================= [ Constructor ] ================= */

Puzzle::Puzzle() {
	createPuzzle();
}

Puzzle::Puzzle(int face, int pieces, int corner): face(face), pieces(pieces), corner(corner) {
	createPuzzle();
}

Puzzle::~Puzzle() {
	delete(this->module);
}

/* ==================== [ Utils ] ==================== */

void Puzzle::createPuzzle() {
	this->module = new Megaminx(this);
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
