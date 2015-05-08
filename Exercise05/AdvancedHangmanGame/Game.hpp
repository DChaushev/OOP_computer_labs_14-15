/* 
 * File:   Game.hpp
 * Author: Dimitar
 *
 * Created on May 8, 2015, 10:51 AM
 */

#ifndef GAME_HPP
#define	GAME_HPP

#include "GameState.h"
#include "Output.hpp"
#include "Input.hpp"
#include "WordStorage.hpp"
#include "GameOutput.hpp"
#include "GameInput.hpp"

using namespace std;

class Game {
public:
    Game(WordStorage * ws, Output * gout, Input * gin);

    virtual ~Game();

    void start();

private:
    GameState gameState;

    WordStorage * wordStorage;
    Output * gameOutput;
    Input * gameInput;
    
    string word;
    
    void checkLetter(char letter);
    bool used(char letter);
    bool replaceLetter(char letter);
    void checkState();
};

#endif	/* GAME_HPP */

