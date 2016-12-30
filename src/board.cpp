#include "board.h"
#include "input.h"
#include "constants.h"

Board::Board() {
  spaces.reserve(128);
  
  for (int i = 0; i < 128; i++) {
    Square square(i % 2);
    spaces.push_back(square);
  }

  pieces[0].reserve(16);
  pieces[1].reserve(16);
}

void Board::setup() {
  Input::parseFen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
}

std::string Board::to_string() {
  std::string result = "\33[4m";
  result += "                \n";

  for (ubyte row = 0; row < 8; row++) {
    result += "|";
    for (ubyte col = 0; col < 8; col++) {
      ubyte square_index = row*16 + col;
      result += spaces[square_index].to_string() + "|";
    }
    result += '\b';
    result += '\n';
  }

  result += "\33[0m";

  return result;
}
