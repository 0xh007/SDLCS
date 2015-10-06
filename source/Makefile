CC = g++
INC_DIR = headers
SRC_DIR = src
OBJ_DIR = object
COMPILER_FLAGS = -c -Wall -I$(INC_DIR)
LINKER_FLAGS = -lSDL2

SRCS = $(SRC_DIR)/main.cpp $(SRC_DIR)/graphics.cpp
OBJS = $(OBJ_DIR)/main.o $(OBJ_DIR)/graphics.o

DEPS = $(INC_DIR)/graphics.h

all : $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp 
	$(CC) $(COMPILER_FLAGS) $(LINKER_FLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(DEPS)

clean:
	rm -rf $(OBJS) all
	rm -rf SDLCS
