#include "chessDriver.h"

Board ChessDriver::board;
int main() {
  ChessDriver::board.setup();

  std::cout << ChessDriver::board.to_string() << std::endl;

  return 0;
}
