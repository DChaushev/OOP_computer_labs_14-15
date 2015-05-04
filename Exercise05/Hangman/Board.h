/* 
 * File:   Board.h
 * Author: Dimitar
 *
 * Created on May 3, 2015, 10:37 PM
 */

#ifndef BOARD_H
#define	BOARD_H

#include <iostream>
#include <string>

using namespace std;

/*
 * The board class displays the word on the console screen:
 * 
 * Example:
 *
 * pr__r____r
 * 
 */
class Board {
public:
    Board(string word);
    Board(const Board& orig);
    virtual ~Board();

    /**
     * This method displays the board. It should look like the example above.
     */
    void displayBoard() const;

    /**
     * This methods takes a character as a parameter and checks
     * if the current word contains this character.
     * 
     * If yes - updates the map and returns true.
     * If no - returns false;
     * 
     * @param c
     * @return 
     */
    bool updateChar(char c);

    /**
     * Checks if there are any unrevealed characters.
     * 
     * @return 
     */
    bool anyLeft() const;

    string getWord() const;

private:
    string word;

    /*
     * This map is a bool array with the length of the current word.
     * When it's element is true - that means that the character at that position
     * is revealed. If it is false - it is still hidden.
     */
    bool * map;
};

#endif	/* BOARD_H */

