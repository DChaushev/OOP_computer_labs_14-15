/* 
 * File:   Game.cpp
 * Author: Dimitar
 * 
 * Created on May 3, 2015, 10:50 PM
 */

#include "Game.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Game::Game(Player * player) : player(player) {
    board = new Board(words[chooseWord()]);
}

Game::Game(const Game& orig) : player(orig.player), board(orig.board) {
}

Game::~Game() {
    delete board;
}

/**
 * While the player has attempts left and the word is not revealed
 * we keep a while loop in which:
 * - we display what's revealed from the word.
 * - we display the attempts left.
 * - we ask the user to input a character.
 * - we check if the word contains that character and update it if so.
 */
void Game::play() {

    while (player->hasAttemptsLeft() && board->anyLeft()) {

        board->displayBoard();
        player->displayAttempts();

        char c = getInput();
        if (!board->updateChar(c)) {
            player->setAttempts(player->getAttempts() - 1);
        }
    }

    board->displayBoard();

    if (player->hasAttemptsLeft()) {
        cout << "YOU WIN!!!" << endl;
    } else {
        cout << "you loose..." << endl;
    }
}

char Game::getInput() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << endl;
    return c;
}

/**
 * We keep the words in an array and choose a random word from it.
 * @return 
 */
int Game::chooseWord() {
    srand(time(NULL));
    return rand() % numberOfWords;
}
