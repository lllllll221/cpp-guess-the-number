#include <iostream>

using namespace std;

class Game {
public:
    Game() : low(1), high(100), guess((low + high) / 2), response("") {}
    void play();

private:
    int low;
    int high;
    int guess;
    string response;

    void displayPrompt();
    void updateGuess();
};

void Game::play() {
    cout << "Think of a number between 1 and 100, and I'll try to guess it." << endl;

    do {
        displayPrompt();
        updateGuess();
    } while (response != "guessed");

    cout << "I guessed it! Thanks for playing." << endl;
}

void Game::displayPrompt() {
    cout << "Is it " << guess << "? (more/less/guessed) ";
    cin >> response;
}

void Game::updateGuess() {
    if (response == "more") {
        low = guess + 1;
        guess = (low + high) / 2;
    } else if (response == "less") {
        high = guess - 1;
        guess = (low + high) / 2;
    }
}

int main() {
    Game game;
    game.play();
    return 0;
}