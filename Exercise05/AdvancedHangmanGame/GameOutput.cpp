/* 
 * File:   GameOutput.cpp
 * Author: Dimitar
 * 
 * Created on May 8, 2015, 10:19 AM
 */

#include "GameOutput.hpp"
#include <iostream>

using namespace std;

GameOutput::GameOutput() {
}

void GameOutput::display(const GameState& gameState) {

    if (gameState.win) {
        displayWinMessage();
        return;
    }
    if (gameState.lose) {
        displayLoseMessage();
        return;
    }

    for (int i = 0; i < gameState.wordState.size(); i++) {
        cout << gameState.wordState[i] << " ";
    }
    cout << endl;

    cout << "Remaining attempts: " << gameState.remainingAttempts << endl;

    cout << "Used Letters: ";

    for (int i = 0; i < gameState.usedLetters.size(); i++) {
        cout << gameState.usedLetters[i];
        if (i != gameState.usedLetters.size() - 1) cout << ", ";
    }

    cout << endl << "Enter letter: ";
}

void GameOutput::displayWinMessage() {
    cout << "You WIN!" << endl;
}

void GameOutput::displayLoseMessage() {
    cout << "You lose!" << endl; 
}


