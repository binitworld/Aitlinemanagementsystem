# Makefile for Airline Management System

# Compiler options
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# Directories
SRC_DIR = src
BIN_DIR = bin

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%.o)

# Target executable
TARGET = $(BIN_DIR)/airline

# Default target
all: $(TARGET)

# Compile and link the source code files into the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

# Compile the source files into object files
$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean compiled files and the executable
clean:
	rm -rf $(BIN_DIR)/*.o $(TARGET)

# Run the executable
run:
	$(TARGET)

