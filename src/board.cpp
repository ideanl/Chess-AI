#include "board.h"
#include "input.h"

Board::Board() {
  spaces.reserve(128);
  
  for (int i = 0; i < 128; i++) {
    Square square(i % 2);
    spaces.push_back(square);
  }
}

void Board::setup() {
  Input::parseFen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
}

std::string Board::to_string() {
}
