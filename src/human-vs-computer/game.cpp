#include "game.h"

Game::Game() {
    Game::play();
}

void Game::play() {
    std::cout << "Think of a number between 1 and 100, and I'll try to guess it." << std::endl;

    do {
        displayPrompt();
        updateGuess();
    } while (response != "guessed" && response != "g");

    std::cout << "I guessed it! Thanks for playing." << std::endl;
}

void Game::displayPrompt() {
    std::cout << "Is it " << guess << "? (more(m)/less(l)/guessed(g)): ";
    std::cin >> response;
}

void Game::updateGuess() {
    if (response == "more" || response == "m") {
        low = guess + 1;
        guess = (low + high) / 2;
    } else if (response == "less" || response == "l") {
        high = guess - 1;
        guess = (low + high) / 2;
    }
}
