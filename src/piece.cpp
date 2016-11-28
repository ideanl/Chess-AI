#include "piece.h"
#include "constants.h"

Piece::Piece(char code, bool color)
  : code(code), color(color) {}

std::string Piece::to_string() {
  char result;
  switch(code) {
    case PAWN:
        result = 'P';
        break;
    case KING:
        result = 'K';
        break;
    case ROOK:
        result = 'R';
        break;
    case BISHOP:
        result = 'B';
        break;
    case QUEEN:
        result = 'Q';
        break;
    case KNIGHT:
        result = 'N';
        break;
    default:
        std::cerr << "ERROR INVALID CODE" << std::endl;
        break;
  }

  if (color == BLACK) result = tolower(result);
  std::string result_str = "" + result;
  return result_str;
}
