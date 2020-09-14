#include <iostream>
enum class pieceType :unsigned long{
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};
pieceType piece = pieceType::King;
int main(void) {
	// <ERROR> if (pieceType::Queen == 2) return 1;
}