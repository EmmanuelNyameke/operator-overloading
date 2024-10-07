// Implementation file for the time class
#include "time.h"

Time::Time():hours(12), minutes(0), seconds(0), isPM(false){}

void Time::displayTime() const{
    cout << (hours < 10 ? "0" : "") << hours << ":" << (minutes < 10 ? "0" : "") << minutes << ":" << (seconds < 10 ? "0" : "") << seconds << " " << (isPM ? "PM" : "AM") << endl;
}

Time& Time::operator++(){
    ++seconds;
    if(seconds == 60){
        seconds = 0;
        ++minutes;
        if(minutes == 60){
            minutes = 0;
            ++hours;
            if(hours == 12){
                isPM = !isPM; //Toggling AM/PM
            }
            if(hours == 13){
                hours = 1;
            }
        }
    }
    return *this;
}

int Time::operator()(){
    int totalSeconds = 0;
    // if PM, add 12 hours(except when its exactly 12pm)
    if(isPM && hours != 12){
        totalSeconds += 12 * 3600;
    }
    // If AM an its 12 AM, set the hour count to 0
    if(!isPM && hours == 12){
        totalSeconds -= 12 * 3600;
    }
    totalSeconds += hours * 3600;
    totalSeconds += minutes * 60;
    totalSeconds += seconds;
    return totalSeconds;
}

Time& Time::operator+=(int addSeconds){
    while(addSeconds > 0){
        ++(*this); // Use the prefix ++ to add each second
        --addSeconds;
    }
    return *this;
}