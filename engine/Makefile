CC		:= g++
C_FLAGS := -std=c++17 -Wall -Wextra -fPIC -c

BIN		:= bin
SRC		:= src
INCLUDE	:= include
LIB		:= lib

LIBRARIES	:=

ifeq ($(OS),Windows_NT)
EXECUTABLE	:= Crutch
else
EXECUTABLE	:= Crutch
endif

# all: $(BIN)/$(EXECUTABLE)

# clean:
# 	$(RM) $(BIN)/$(EXECUTABLE)

run:
	$(CC) $(C_FLAGS) $(SRC)/core/Application.cpp -o $(BIN)/$(EXECUTABLE).o

# $(BIN)/$(EXECUTABLE): $(SRC)/*
# 	$(CC) $(C_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)
