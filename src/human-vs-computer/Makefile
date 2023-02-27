CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11
SRC = main.cpp game.cpp
OBJ = $(addprefix .tmp/,$(notdir $(SRC:.cpp=.o)))
EXEC = cpp-guess-the-number

# Создание папки .tmp
create_dir := $(shell mkdir -p .tmp)

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

.tmp/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf .tmp $(EXEC)

.PHONY: clean
