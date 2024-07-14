#include "Board.h"

Board::Board() {}

Board::~Board() {
    for (auto& piece : pieces) {
        delete piece;
    }
    pieces.clear();
}

void Board::setupBoard() {
    // Tạo và đặt các quân cờ lên bàn cờ ở vị trí ban đầu
    // Đây là nơi để bạn thiết lập các quân cờ cho trò chơi Chinese chess
}

void Board::displayBoard() const {
    // Hiển thị bàn cờ với các quân cờ hiện tại
}

ChessPiece* Board::selectPiece() const {
    // Cho phép người dùng chọn một quân cờ từ bàn cờ và trả về con trỏ đến quân cờ đó
    // Phương thức này cần được triển khai để cho phép người dùng chọn quân cờ
    return nullptr;
}
