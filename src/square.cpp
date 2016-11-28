#include "square.h"

Square::Square(bool color) : color(color) {}

std::string Square::to_string() {
  if (piece == NULL) {
    return " "; 
  }
  return piece->to_string();
}
