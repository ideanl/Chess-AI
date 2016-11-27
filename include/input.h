#ifndef INPUT_H
#define INPUT_H

#include <iostream>
#include "constants.h"

class Input {
  public:
    static void parseFen(std::string fen);
    static ubyte getPieceType(char c);
};

#endif
