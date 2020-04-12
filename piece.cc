#include "piece.h"
#include "move.h"
#include "position.h"

using namespace std;

Piece::Piece(char name, const Colour pieceColour, const int force) :
	name{name}, pieceColour{pieceColour}, force{force} {}

char Piece::getPiece() const {
	return name;
}

Colour Piece::getPieceColour() const {
	return pieceColour;
}

int Piece::getForce() const {
	return force;
}

bool Piece::getFirstMove() const {
	return firstMove;
}

void Piece::setFirstMove(bool b) {
	firstMove = b;
}
	
vector<Position> Piece::getInBetweenPositions(Move m) const {
	vector<Position> positions;
	return positions;
}

Piece::~Piece() {}
