/* 
 * File:   example02.cpp
 * Author: Dimitar
 *
 * Created on April 18, 2015, 4:58 PM
 */

#include <iostream>
#include <cstdio>

using namespace std;

class Date{
private:
    int day, month, year;
    
public:
    
    Date(){
        day = 0;
        month =0;
        year = 0;
    }
    
    Date(int day, int month, int year) :
    day(day), month(month), year(year) {
    }

    int GetDay() const {
        return day;
    }

    void SetDay(int day) {
        this->day = day;
    }

    int GetMonth() const {
        return month;
    }

    void SetMonth(int month) {
        this->month = month;
    }

    int GetYear() const {
        return year;
    }

    void SetYear(int year) {
        this->year = year;
    }
    
    void display() const {
        printf("%02d.%02d.%d", day, month, year);
    }

};

class Time{
private:
    int hour, minute;
    
public:
    
    Time() {
        hour = 0;
        minute = 0;      
    }

    
    Time(int hour, int minute) :
    hour(hour), minute(minute) {
    }

    int GetHour() const {
        return hour;
    }

    void SetHour(int hour) {
        this->hour = hour;
    }

    int GetMinute() const {
        return minute;
    }

    void SetMinute(int minute) {
        this->minute = minute;
    }
    
    void display() const {
        printf("%02d:%02d", hour, minute);
    }

};

class DateTime : public Date, public Time{
public:
    DateTime(int day, int month, int year, int hour, int minute)
    {
        SetDay(day);
        SetHour(hour);
    }

    void display() const {
        Date::display();
        cout << " ";
        Time::display();
        cout << endl;
    }
};
/*
 * 
 */
int main() {

    const DateTime dt(18, 4, 2015, 17, 5);
    dt.display();

    
    return 0;
}

