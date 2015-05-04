/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on May 3, 2015, 10:31 PM
 */

#include <cstdlib>

#include "Player.hpp"
#include "Game.hpp"

using namespace std;

/*
 * 
 */
int main() {

    /*
     * We create a new player and pass it to the game.
     * 
     * The play method in the Game class starts the game.
     */
    Player * p = new Player();
    Game * g = new Game(p);

    g->play();


    /*
     * Don't forget to free your resources!
     */
    delete g;
    delete p;

    return 0;
}

