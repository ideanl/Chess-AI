#include "chessDriver.h"
#include "input.h"

void Input::parseFen(std::string fen) {
  ubyte index = 112;
  ubyte indexWhite = 1;
  ubyte indexBlack = 1;
  for (int i = 0; index >= 0; i++) {
    char fenChar = fen[i];

    while (index & 0x08) { 
      board.spaces[index].piece = NULL;
      if (index % 16 == 15)
        index -= 31;
      else
        index++;
    }

    if (fenChar == '/') { continue; }
    else if (fenChar == ' ') { break; }
    else if (isdigit(fenChar)) {
      for(int j = 48; j < fenChar; j++) { 
        board.spaces[index].piece = NULL;
        index++;
      }
      continue;
    }

    bool color = islower(fenChar) ? BLACK : WHITE;
    Piece* piece = new Piece(getPieceType(fenChar), color);

    ubyte pieceIndex = 0;
    if (piece->code != KING)
      pieceIndex = piece->color == WHITE ? indexWhite++ : indexBlack++;
    board.pieces[piece->color][pieceIndex] = piece;

    board.spaces[index].piece = piece;

    index++;
  }
}

ubyte Input::getPieceType(char c) {
  switch (toupper(c)) {
    case 'P':
      return PAWN;
      break;
    case 'R':
      return ROOK;
      break;
    case 'N':
      return KNIGHT;
      break;
    case 'B':
      return BISHOP;
      break;
    case 'Q':
      return QUEEN;
      break;
    case 'K':
      return KING;
      break;
    default:
      return '\0';
  }
}
