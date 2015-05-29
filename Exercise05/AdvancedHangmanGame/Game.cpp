/* 
 * File:   Game.cpp
 * Author: Dimitar
 * 
 * Created on May 8, 2015, 10:51 AM
 */
#include <iostream>
#include "Game.hpp"

Game::Game(WordStorage * ws, Output * gout, Input * gin) :
wordStorage(ws), gameOutput(gout), gameInput(gin) {

    word = wordStorage->getWord();

    char first = word[0];
    char last = word[word.length() - 1];

    gameState.wordState.resize(word.length(), '_');

    replaceLetter(first);
    replaceLetter(last);

    gameState.usedLetters.push_back(first);
    gameState.usedLetters.push_back(last);

    gameState.remainingAttempts = 5;
    gameState.lose = false;
    gameState.win = false;
    gameState.wrongAttempts = 0;
}

Game::~Game() {
    delete wordStorage;
    delete gameInput;
    delete gameOutput;
}

void Game::start() {

    while (!gameState.lose && !gameState.win) {

        gameOutput->display(gameState);
        char letter = gameInput->getInput();

        checkLetter(letter);

        checkState();
    }

    gameOutput->display(gameState);

}

void Game::checkLetter(char letter) {
    if (used(letter)) {
        return;
    }

    if (!replaceLetter(letter)) {
        gameState.remainingAttempts--;
        gameState.wrongAttempts++;
    }
    gameState.usedLetters.push_back(letter);
}

bool Game::used(char letter) {
    for (int i = 0; i < gameState.usedLetters.size(); i++) {
        if (letter == gameState.usedLetters[i]) {
            return true;
        }
    }
    return false;
}

bool Game::replaceLetter(char letter) {
    bool replaced = false;
    for (int i = 0; i < word.length(); i++) {
        if (letter == word[i]) {
            gameState.wordState[i] = letter;
            replaced = true;
        }
    }
    return replaced;
}

void Game::checkState() {
    if (gameState.remainingAttempts == 0) {
        gameState.lose = true;
        return;
    }

    for (int i = 0; i < gameState.wordState.size(); i++) {
        if (gameState.wordState[i] == '_') {
            return;
        }
    }
    gameState.win = true;

}
