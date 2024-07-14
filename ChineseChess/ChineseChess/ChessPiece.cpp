#include "ChessPiece.h"

ChessPiece::ChessPiece(std::string name, int posX, int posY)
    : name(name), positionX(posX), positionY(posY) {}

ChessPiece::~ChessPiece() {}

int ChessPiece::getX() const {
    return positionX;
}

int ChessPiece::getY() const {
    return positionY;
}

void ChessPiece::setPosition(int x, int y) {
    positionX = x;
    positionY = y;
}

std::string ChessPiece::getName() const {
    return name;
}
