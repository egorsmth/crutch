CC		:= g++
C_FLAGS := -std=c++17 -Wall -Wextra -fPIC -c

BIN		:= bin
SRC		:= src
INCLUDE	:= vandor/spdlog/include/
INCLUDE2 := vandor/glfw/include/

LIB		:= lib
CORE    := src/core/
PLATFORM    := src/platform/linux/

LIBRARIES	:=

SH_APP = Application
SH_LOG = Log
SH_WINDOW = WindowLinux
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
	$(CC) $(C_FLAGS) -I$(INCLUDE) $(CORE)$(SH_LOG).cpp -o $(BIN)/$(SH_LOG).o
	$(CC) $(C_FLAGS) -I$(INCLUDE) -I$(INCLUDE2) $(PLATFORM)$(SH_WINDOW).cpp -o $(BIN)/$(SH_WINDOW).o


# $(CC) $(C_FLAGS) -I$(INCLUDE) -I$(INCLUDE2) -L$(LIB) $(PLATFORM)$(SH_WINDOW).cpp -o $(BIN)/$(SH_WINDOW).o

# $(BIN)/$(EXECUTABLE): $(SRC)/*
# 	$(CC) $(C_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)
