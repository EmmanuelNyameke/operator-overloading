// The interface file for the date class
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
using namespace std;

class Date {
    private:
           // Instance data members
           int month;
           int day;
           int year;
           // Static data members and member functions
           static const int startWeekDay;
           static const int startYear;
           static const int daysInMonths[];
           static const string daysOfWeek[];
           static const string monthsOfYear[];
           static bool isLeap(int year);
           // Private helper functions
           bool isValid() const;
           string findWeekDay();
           int findTotalDays() const;
           void plusReset();
           void minusReset();
    public: 
          // Constructors and Destructors
          Date(int month, int day, int year);
          Date();
          ~Date();
          // Member operator functions
          Date& operator++();
          Date& operator--();
          Date operator++(int);
          Date operator--(int);
          Date& operator+=(int days);
          Date& operator-=(int days);
          bool operator==(const Date& right) const;
          bool operator!=(const Date& right) const;
          Date& operator=(const Date& right);
          // Friend Operator functions
          friend int operator-(const Date& date1, const Date& date2);
          friend ostream& operator<<(ostream& output, const Date& date);
};
#endif