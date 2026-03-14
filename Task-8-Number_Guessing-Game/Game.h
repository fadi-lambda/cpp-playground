#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct GameConfig {
    int maxNumber;
    int maxAttempts;
    string levelName;
};

class Game {
private:
    GameConfig config;
    int secretNumber;
    int attemptsLeft;
    int score;
    int attemptsTaken;

    GameConfig getConfig(int choice);
    int        getValidInput(int min, int max);
    void       displayStats();

public:
    Game();
    void selectDifficulty();
    void play();
    bool askPlayAgain();
    void displayWelcome();
};