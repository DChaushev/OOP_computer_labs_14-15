/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on May 4, 2015, 9:53 AM
 */

#include <cstdlib>
#include <iostream>
#include <stdexcept>

#include "WordStorage.hpp"
#include "ArrayWordStorage.hpp"
#include "Input.hpp"
#include "GameInput.hpp"
#include "Output.hpp"
#include "GameOutput.hpp"
#include "Game.hpp"
#include "FilesWordStorage.hpp"

using namespace std;

/*
 * 
 */
int main() {

    try {

        //WordStorage * storage = new ArrayWordStorage();
        WordStorage * storage = new FilesWordStorage("words");
        Input * input = new GameInput();
        Output * output = new GameOutput();

        Game * game = new Game(storage, output, input);
        game->start();

    } catch (invalid_argument& ex) {
        cout << ex.what() << endl;
    }

    return 0;
}

