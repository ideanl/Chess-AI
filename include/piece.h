#ifndef PIECE_H
#define PIECE_H

#include <iostream>

class Piece {
  public:
    Piece(char code, bool color);
    char code;
    bool color;
    std::string to_string();
};

#endif
