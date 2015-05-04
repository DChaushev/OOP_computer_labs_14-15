/* 
 * File:   Player.cpp
 * Author: Dimitar
 * 
 * Created on May 3, 2015, 10:32 PM
 */

#include "Player.hpp"
#include <iostream>

Player::Player() : attempts(DEFAULT_ATTEMPTS) {
}

Player::Player(int attempts) : attempts(attempts) {
}

Player::Player(const Player& orig) : attempts(orig.attempts) {
}

Player::~Player() {
}

bool Player::hasAttemptsLeft() const {
    return attempts > 0;
}

int Player::getAttempts() const {
    return attempts;
}

void Player::setAttempts(int attempts) {
    this->attempts = attempts;
}

void Player::displayAttempts() const {
    std::cout << "Attempts left: " << attempts << std::endl;
}
