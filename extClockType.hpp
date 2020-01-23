// Programmer: Luis Urena
// Program: assignment 3
// Date: Dec 1, 2018
// Purpose: this program defines the functions of clockType and includes the storing of the timeZone.

#ifndef extClockType_hpp
#define extClockType_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class extClockType
{
public: //new insert
    void setTime(int hours, int minutes, int seconds, string timeZone);
    
    void setHours(int hours); //member function to only set hours
    void setMinutes(int minutes);  //member function that sets only the minutes
    void setSeconds(int second);   //member function that only sets seconds
    
    //Function to set the time.
    //The time is set according to the parameters.
    //Postcondition: hr = hours; min = minutes;
    //               sec = seconds;
    //               The function checks whether the
    //               values of hours, minutes, and seconds
    //               are valid. If a value is invalid, the
    //               default value 0 is assigned.
    
    
    void getTime(int& hours, int& minutes, int& seconds, string& timeZone) const;
    
    
    //new insert
    int getHours() const   //inline func that retrieves  only hrs
    {
        return hr;
    }
    
    int getMinutes() const  //inline func that retrieves only the min
    {
        return min;
    }
    
    int getSeconds() const  //inline func that retrieves only min
    {
        return sec;
    }
    string getTimeZone() const
    {
        return tZone;
    }
    
    
    
    
    
    
    
    
    //Function to return the time.
    //Postcondition: hours = hr; minutes = min;
    //               seconds = sec;
    
    void printTime() const;
    //Function to print the time.
    //Postcondition: The time is printed in the form
    //               hh:mm:ss.
    
    void incrementSeconds();
    //Function to increment the time by one second.
    //Postcondition: The time is incremented by one second.
    //               If the before-increment time is
    //               23:59:59, the time is reset to 00:00:00.
    
    void incrementMinutes();
    //Function to increment the time by one minute.
    //Postcondition: The time is incremented by one minute.
    //               If the before-increment time is
    //               23:59:53, the time is reset to 00:00:53.
    
    
    void incrementHours();
    //Function to increment the time by one hour.
    //Postcondition: The time is incremented by one hour.
    //               If the before-increment time is
    //               23:45:53, the time is reset to 00:45:53.
    
    
    bool equalTime(const extClockType& otherClock) const;
    //Function to compare the two times.
    //Postcondition: Returns true if this time is equal to
    //               otherClock; otherwise, returns false.
    
    
    extClockType(int hours, int minutes, int seconds, string TimeZone);
    
    
    extClockType();
    //Default constructor
    //The time is set to 00:00:00.
    //Postcondition: hr = 0; min = 0; sec = 0; tZone= 0;
    
private:
    int hr;  //variable to store the hours
    int min; //variable to store the minutes
    int sec; //variable to store the seconds
    string tZone;
};

#endif /* extClockType_hpp */
