#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include "piece.h"

class Square {
  public:
    Square(bool color);
    Piece* piece = NULL;
    std::string to_string();
    const int color;
};

#endif
