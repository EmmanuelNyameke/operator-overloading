/*
Create a class named Time that defines a point in time in terms of hours, minutes, and seconds and specifies AM or PM. Hours can be between 1 and 12, minutes can be between 1 and 59, and seconds can also be between 1 and 59. Also define an integer that can be 0 or 1 to represent AM or PM. Create a default constructor that sets the time to midnight. Overload the prefix ++ to add one second to the time (representing each tick of the clock). Overload the operator() to find the duration of time from midnight in seconds. Overload the operator += to add a duration of times (in seconds) to get a new point of time. 
*/

#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time {
    private:
           int hours;
           int minutes;
           int seconds;
           bool isPM; // 0 for AM, 1 for PM
    public:
          // Constructor to initialize time to midnight (12:00:00 AM)
          Time();
          // Function to display time in HH:MM:SS AM/PM Format
          void displayTime() const;
          // Overloading prefix ++ to add one second
          Time& operator++();
          // Overloading operator() to calculate time duration from midnight in seconds
          int operator()();
          // Overloading operator+= to add seconds to the current time
          Time& operator+=(int addSeconds); 
};
#endif
