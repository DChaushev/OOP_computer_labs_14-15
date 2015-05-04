/* 
 * File:   Board.cpp
 * Author: Dimitar
 * 
 * Created on May 3, 2015, 10:37 PM
 */

#include "Board.h"

/**
 * In the constructor, we get the word and the number of attempts.
 * 
 * Then it initializes the map with the length of the word.
 * Revealed are only the first and the last character ( all their appearances )
 * 
 * For example if the word is programmer, the map will look like this:
 * 1 1 0 0 1 0 0 0 0 1
 * p r o g r a m m e r
 * 
 * @param word
 * @param attempts
 */
Board::Board(string word) : word(word) {
    map = new bool[word.length()];

    char first = word[0];
    char last = word[word.length() - 1];

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == first || word[i] == last)
            map[i] = 1;
        else
            map[i] = 0;
    }
}

Board::Board(const Board& orig) : word(orig.word) {
}

Board::~Board() {
    delete[] map;
}

bool Board::anyLeft() const {
    for (int i = 0; i < word.length(); i++) {
        if (map[i] == 0) {
            return true;
        }
    }
    return false;
}

void Board::displayBoard() const {
    for (int i = 0; i < word.length(); i++) {
        if (map[i]) {
            cout << word[i];
        } else {
            cout << "_";
        }
    }
    cout << endl;
}

bool Board::updateChar(char c) {
    bool contains = false;

    for (int i = 1; i < word.length() - 1; i++) {
        if (word[i] == c) {
            map[i] = 1;
            contains = 1;
        }
    }
    return contains;
}

string Board::getWord() const {
    return word;
}
