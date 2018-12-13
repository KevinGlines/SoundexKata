//
// Created by hugovalle1 on 12/12/2018.
//

#include "game.h"

/**
 * Roll Pins
 * @param frame - Number of pins
 */
void Game::roll(int frame)
{
    rolls[currentRoll] = frame;
    currentRoll++;
    //score += frame;
}

/**
 * Returns final game score
 */
int Game::scoreGame()
{
    int score = 0;
    int rollNum = 0;
    // 10 scores per game
    for(int frame = 0; frame < 10; frame++)
    {
        if(rolls[frame] == 10) //strike
        {
            score += rolls[frame] + rolls[frame +1] + rolls[frame + 2];
            frame++;
        }
        else if(isSpare(rollNum)) // spare
        {
            score += 10 + rolls[rollNum + 2];
        }
        else {
            score += rolls[rollNum] + rolls[rollNum + 1];
            rollNum += 2;
        }
        // Scoring per game

    }
    return score;
}

bool Game::isSpare(int frameIndex)
{
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10; // spare
}

Game::Game() {
    currentRoll = 0;
    rolls.fill(0);
}