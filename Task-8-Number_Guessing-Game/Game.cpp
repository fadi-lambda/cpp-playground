#include "Game.h"

Game::Game() {
    secretNumber = 0;
    attemptsLeft = 0;
    score = 100;
    attemptsTaken = 0;
    srand(time(0));
}

GameConfig Game::getConfig(int choice) {
    switch (choice) {
    case 1:  return { 50,  10, "Easy" };
    case 2:  return { 100,  7, "Medium" };
    case 3:  return { 200,  5, "Hard" };
    default: return { 100,  7, "Medium" };
    }
}

int Game::getValidInput(int min, int max) {
    int input;
    while (true) {
        cin >> input;
        if (cin.fail() || input < min || input > max) {
            cin.clear();
            cin.sync();
            cout << "Invalid input. Enter a number between "
                << min << " and " << max << ": ";
        }
        else {
            cin.sync();
            return input;
        }
    }
}

void Game::displayWelcome() {
    cout << "\n==============================" << endl;
    cout << " === Number Guessing Game ===" << endl;
    cout << "==============================\n" << endl;
}

void Game::displayStats() {
    cout << "\n------------------------------" << endl;
    cout << "Difficulty : " << config.levelName << endl;
    cout << "Range      : 1 to " << config.maxNumber << endl;
    cout << "Attempts   : " << config.maxAttempts << endl;
    cout << "------------------------------\n" << endl;
}

void Game::selectDifficulty() {
    cout << "Select Difficulty:" << endl;
    cout << "1. Easy   (1-50,  10 attempts)" << endl;
    cout << "2. Medium (1-100,  7 attempts)" << endl;
    cout << "3. Hard   (1-200,  5 attempts)" << endl;
    cout << "\nChoice: ";

    int choice = getValidInput(1, 3);
    config = getConfig(choice);
    secretNumber = rand() % config.maxNumber + 1;
    attemptsLeft = config.maxAttempts;
    score = 100;
    attemptsTaken = 0;
}

void Game::play() {
    displayStats();

    while (attemptsLeft > 0) {
        cout << "Attempts remaining: " << attemptsLeft << endl;
        cout << "Enter guess: ";

        int guess = getValidInput(1, config.maxNumber);
        attemptsTaken++;

        if (guess == secretNumber) {
            cout << "\n Correct! You guessed it in "
                << attemptsTaken << " attempt(s)!" << endl;
            cout << "Your Score: " << score << "\n" << endl;
            return;
        }

        attemptsLeft--;
        score -= 10;

        if (attemptsLeft == 0) break;

        if (guess > secretNumber)
            cout << "  Too High! Try lower.\n" << endl;
        else
            cout << "  Too Low! Try higher.\n" << endl;
    }

    cout << "\n Out of attempts! The number was: "
        << secretNumber << endl;
    cout << "Your Score: " << (score < 0 ? 0 : score)
        << "\n" << endl;
}

bool Game::askPlayAgain() {
    char choice;
    cout << "Play again? (y/n): ";
    cin >> choice;
    cin.sync();
    return (choice == 'y' || choice == 'Y');
}