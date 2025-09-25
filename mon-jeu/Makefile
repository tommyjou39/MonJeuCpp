CXX = g++
CXXFLAGS = -Wall -std=c++17
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
SRC = src/main.cpp src/player.cpp src/score.cpp src/level.cpp
INC = -Iinclude
TARGET = mon-jeu

all:
	$(CXX) $(CXXFLAGS) $(SRC) $(INC) -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET)


