#ifndef BOARD_H
#define BOARD_H

#include "ChessPiece.h"
#include <vector>

class Board {
private:
    std::vector<ChessPiece*> pieces; 

public:
    Board();
    ~Board();

    void setupBoard(); 
    void displayBoard() const; 
    ChessPiece* selectPiece() const; 
};

#endif // BOARD_H
