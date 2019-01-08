CC		:= g++
C_FLAGS := -std=c++17 -Wall -Wextra

CRUTCH := /home/matt/dev/engine/engine/

BIN		:= bin
SRC		:= src
INCLUDE	:= $(CRUTCH)src/
INCLUDE2 := $(CRUTCH)vandor/spdlog/include/
LIB		:= lib


LIBRARIES	:= $(CRUTCH)bin/Application.o $(CRUTCH)bin/Log.o

ifeq ($(OS),Windows_NT)
EXECUTABLE	:= main.exe
else
EXECUTABLE	:= main
endif

all: $(BIN)/$(EXECUTABLE)

clean:
	$(RM) $(BIN)/$(EXECUTABLE)

run: all
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*
	$(CC) $(C_FLAGS) -I$(INCLUDE) -I$(INCLUDE2) -L$(LIB) $^ -o $@ $(LIBRARIES)