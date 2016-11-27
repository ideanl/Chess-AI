#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include <vector>
#include "square.h"

class Board {
  public:
    Board();
    std::string to_string();
    std::vector<Square> spaces;
    std::vector<Piece*> pieces[2];
    void setup();
};

#endif
