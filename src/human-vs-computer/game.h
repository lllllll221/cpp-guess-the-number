#pragma once

#include <iostream>

class Game {
public:
    Game();
    void play();

private:
    int low = 1;
    int high = 100;
    int guess = (low + high) / 2;
    std::string response;

    void displayPrompt();
    void updateGuess();
};
