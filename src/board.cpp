#include "board.h"
#include "input.h"
#include "constants.h"

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
  std::string result = "";

  for (ubyte row = 0; row < 8; row++) {
    for (ubyte col = 0; col < 8; col++) {
      ubyte square_index = row*16 + col;
      spaces[square_index].to_string();
    }
    result += '\b';
  }
}
