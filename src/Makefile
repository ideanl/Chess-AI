INC_DIRS = ../include
OBJ_DIR = ../obj
BIN_DIR = ../bin

$(shell mkdir -p $(OBJ_DIR))
$(shell mkdir -p $(BIN_DIR))
all: $(BIN_DIR)/chess

$(BIN_DIR)/chess: $(OBJ_DIR)/chessDriver.o $(OBJ_DIR)/input.o $(OBJ_DIR)/board.o $(OBJ_DIR)/square.o $(OBJ_DIR)/piece.o
	g++ -g -lm $(OBJ_DIR)/chessDriver.o $(OBJ_DIR)/input.o $(OBJ_DIR)/board.o $(OBJ_DIR)/square.o $(OBJ_DIR)/piece.o -o $(BIN_DIR)/chess

$(OBJ_DIR)/chessDriver.o: chessDriver.cpp
	g++ -std=c++11 -g -I../include/ -c chessDriver.cpp -o $(OBJ_DIR)/chessDriver.o

$(OBJ_DIR)/input.o: input.cpp
	g++ -std=c++11 -g -I../include/ -c input.cpp -o $(OBJ_DIR)/input.o

$(OBJ_DIR)/board.o: board.cpp
	g++ -std=c++11 -g -I../include/ -c board.cpp -o $(OBJ_DIR)/board.o

$(OBJ_DIR)/square.o: square.cpp
	g++ -std=c++11 -g -I../include/ -c square.cpp -o $(OBJ_DIR)/square.o

$(OBJ_DIR)/piece.o: piece.cpp
	g++ -std=c++11 -g -I../include/ -c piece.cpp -o $(OBJ_DIR)/piece.o

$(OBJ_DIR):

.PHONY: clean main

clean:
	rm -rf $(OBJ_DIR)/*.o
