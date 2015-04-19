/* 
 * File:   main.cpp
 * Author: Dimitar
 *
 * Created on March 26, 2015, 1:59 PM
 */

#include <iostream>
#include <string>

#include "NewsSite.h"
#include "User.h"

using namespace std;

int main() {

    Observable * site = new NewsSite("breakingnews.com");
    
    User * user1 = new User("user1");
    User * user2 = new User("user2");

    site->registerObserver(user1);
    site->registerObserver(user2);
    
    site->notifyObservers();
    
    cout << endl;
    
    Observable * site2 = new NewsSite("newSite.com", *site);
    
    site->unregisterObserver(user1);
    site->notifyObservers();
    
    cout << endl;
    
    site2->notifyObservers();
    

    return 0;
}

