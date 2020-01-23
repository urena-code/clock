/// Programmer: Luis Urena
// Program: assignment 3
// Date: Dec 1, 2018
// Purpose: this program sets the functions of clockType and includes the storing of the timeZone.



#include <iostream>
#include "extClockType.hpp"

using namespace std;

void extClockType::setTime(int hours, int minutes, int seconds, string timeZone)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
    
    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;
    
    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
    
    tZone = timeZone;
    
}

void extClockType::getTime(int& hours, int& minutes, int& seconds, string& timeZone) const
{
    hours = hr;
    minutes = min;
    seconds = sec;
    timeZone = tZone;
}



void extClockType::incrementHours()
{
    hr++;
    if(hr > 23)
        hr = 0;
}

void extClockType::incrementMinutes()
{
    min++;
    if (min > 59)
    {
        min = 0;
        incrementHours();
    }
}

void extClockType::incrementSeconds()
{
    sec++;
    
    if (sec > 59)
    {
        sec = 0;
        incrementMinutes();
    }
}

void extClockType::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";
    
    if (min < 10)
        cout << "0";
    cout << min << ":";
    
    if (sec < 10)
        cout << "0";
    cout << sec;
    
    cout <<" " <<  tZone;
    
}

bool extClockType::equalTime(const extClockType& otherClock) const
{
    return (hr == otherClock.hr
            && min == otherClock.min
            && sec == otherClock.sec);
}

extClockType::extClockType(int hours, int minutes, int seconds, string timeZone) //debug thing
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
    
    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;
    
    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
    tZone = timeZone;
    
}

void extClockType::setHours(int hours)

{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;
}



void extClockType::setMinutes(int minutes)

{
    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;
}



void extClockType::setSeconds(int seconds)

{
    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}

extClockType::extClockType()  //default constructor
{
    hr = 0;
    min = 0;
    sec = 0;
    tZone= " " ;
    
}
