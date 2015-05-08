/* 
 * File:   Output.hpp
 * Author: Dimitar
 *
 * Created on May 8, 2015, 10:17 AM
 */

#ifndef OUTPUT_HPP
#define	OUTPUT_HPP

#include "GameState.h"

class Output {
public:
    virtual void display(const GameState& gameState) = 0;
};

#endif	/* OUTPUT_HPP */

