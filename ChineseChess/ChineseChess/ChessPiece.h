#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <iostream>
#include <string>

class ChessPiece {
protected:
    std::string name;
    int positionX;
    int positionY;

public:
    ChessPiece(std::string name, int posX, int posY);
    virtual ~ChessPiece();

    virtual void move() = 0; 
    virtual void displayPossibleMoves() const = 0; 

    int getX() const;
    int getY() const;
    void setPosition(int x, int y);
    std::string getName() const;
};

#endif // CHESSPIECE_H
