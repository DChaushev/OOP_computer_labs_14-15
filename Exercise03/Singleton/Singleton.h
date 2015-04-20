/* 
 * File:   Singleton.h
 * Author: Dimitar
 *
 * Created on April 20, 2015, 3:26 PM
 */

#ifndef SINGLETON_H
#define	SINGLETON_H

/**
 * Singleton class
 * 
 * Observation:
 * 
 * - private constructor!
 * - SINGLE private instance!
 * - we get THE instance with getInstance() method.
 * 
 * @return 
 */
class Singleton {
public:
    static Singleton * getInstance();
private:
    static Singleton * instance;
    Singleton();

};

#endif	/* SINGLETON_H */

