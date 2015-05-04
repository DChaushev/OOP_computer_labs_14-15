/* 
 * File:   Game.hpp
 * Author: Dimitar
 *
 * Created on May 3, 2015, 10:50 PM
 */

#ifndef GAME_HPP
#define	GAME_HPP

#include "Player.hpp"
#include "Board.h"

#include <string>

using namespace std;

class Game {
public:
    Game(Player * player);
    Game(const Game& orig);
    virtual ~Game();

    void play();

private:
    Board * board;
    Player * player;
    const static int numberOfWords = 5;
    const string words[numberOfWords] = {
        "programming",
        "mathematics",
        "discrete",
        "analysis",
        "faculty"
    };

    char getInput();

    int chooseWord();

    void gameOver(bool win);
};

#endif	/* GAME_HPP */

