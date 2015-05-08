/* 
 * File:   GameInput.hpp
 * Author: Dimitar
 *
 * Created on May 8, 2015, 10:47 AM
 */

#ifndef GAMEINPUT_HPP
#define	GAMEINPUT_HPP

#include "Input.hpp"

class GameInput : public Input {
public:
    GameInput();

    virtual char getInput();

};

#endif	/* GAMEINPUT_HPP */

