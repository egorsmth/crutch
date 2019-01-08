CC		:= g++
C_FLAGS := -std=c++17 -Wall -Wextra -fPIC -c

BIN		:= bin
SRC		:= src
INCLUDE	:= vandor/spdlog/include/
LIB		:= lib
CORE    := src/core/

LIBRARIES	:=

SH_APP = Application
SH_LOG = Log
ifeq ($(OS),Windows_NT)
EXECUTABLE	:= Crutch
else
EXECUTABLE	:= Crutch
endif

# all: $(BIN)/$(EXECUTABLE)

# clean:
# 	$(RM) $(BIN)/$(EXECUTABLE)

run:
	$(CC) $(C_FLAGS) -I$(INCLUDE) $(CORE)$(SH_APP).cpp -o $(BIN)/$(SH_APP).o
	$(CC) $(C_FLAGS) -I$(INCLUDE)  $(CORE)$(SH_LOG).cpp -o $(BIN)/$(SH_LOG).o

# $(BIN)/$(EXECUTABLE): $(SRC)/*
# 	$(CC) $(C_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)
