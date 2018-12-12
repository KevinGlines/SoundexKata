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
    score += frame;
}

/**
 * Returns final game score
 */
int Game::scoreGame()
{
    return score;
}
