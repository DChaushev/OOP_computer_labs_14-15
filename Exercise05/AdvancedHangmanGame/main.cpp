/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on May 4, 2015, 9:53 AM
 */

#include <cstdlib>

#include "WordStorage.hpp"
#include "ArrayWordStorage.hpp"
#include "Input.hpp"
#include "GameInput.hpp"
#include "Output.hpp"
#include "GameOutput.hpp"
#include "Game.hpp"

using namespace std;

/*
 * 
 */
int main() {

    WordStorage * storage = new ArrayWordStorage();
    Input * input = new GameInput();
    Output * output = new GameOutput();
    
    Game * game = new Game(storage, output, input);

    game->start();
    
    return 0;
}

