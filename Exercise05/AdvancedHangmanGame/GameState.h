/* 
 * File:   GameState.h
 * Author: Dimitar
 *
 * Created on May 8, 2015, 10:10 AM
 */

#ifndef GAMESTATE_H
#define	GAMESTATE_H

#include <vector>

struct GameState {
    std::vector<char> wordState;
    int remainingAttempts;
    std::vector<char> usedLetters;

    int wrongAttempts;

    bool win;
    bool lose;
};

#endif	/* GAMESTATE_H */

