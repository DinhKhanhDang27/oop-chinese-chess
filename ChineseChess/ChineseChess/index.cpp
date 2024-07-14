#include "Board.h"

int main() {
    Board board;
    board.setupBoard(); 

    board.displayBoard();

    ChessPiece* selectedPiece = board.selectPiece();
    if (selectedPiece != nullptr) {
        std::cout << "Selected piece: " << selectedPiece->getName() << std::endl;
        selectedPiece->displayPossibleMoves();
    }
    else {
        std::cout << "Invalid selection or piece not found." << std::endl;
    }

    return 0;
}
