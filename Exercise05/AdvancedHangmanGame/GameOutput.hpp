/* 
 * File:   GameOutput.hpp
 * Author: Dimitar
 *
 * Created on May 8, 2015, 10:19 AM
 */

#ifndef GAMEOUTPUT_HPP
#define	GAMEOUTPUT_HPP

#include "Output.hpp"

class GameOutput : public Output {
public:
    GameOutput();

    virtual void display(const GameState& gameState);

private:
    void displayWinMessage();
    void displayLoseMessage();
};

#endif	/* GAMEOUTPUT_HPP */

