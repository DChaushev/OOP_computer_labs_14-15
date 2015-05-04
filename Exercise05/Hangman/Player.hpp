/* 
 * File:   Player.hpp
 * Author: Dimitar
 *
 * Created on May 3, 2015, 10:32 PM
 */

#ifndef PLAYER_HPP
#define	PLAYER_HPP

/**
 * The player class has only the number of attempts as data member.
 * Has getter and setter for it, and knows how to display it.
 * 
 */
class Player {
public:
    Player();
    Player(int lifePoints);
    Player(const Player& orig);
    virtual ~Player();

    int getAttempts() const;

    void setAttempts(int attempts);

    bool hasAttemptsLeft() const;

    void displayAttempts() const;

private:
    const static int DEFAULT_ATTEMPTS = 5;
    int attempts;

};

#endif	/* PLAYER_HPP */

