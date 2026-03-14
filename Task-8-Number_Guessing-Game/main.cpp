#include "Game.h"

int main() {
    Game game;

    do {
        game.displayWelcome();
        game.selectDifficulty();
        game.play();
    } while (game.askPlayAgain());

    cout << "\nThanks for playing! Goodbye. 👋\n" << endl;
    return 0;
}