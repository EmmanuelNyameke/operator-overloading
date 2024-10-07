// Application file for the date class
#include "date.h"

int main(){
    // Creating and printing two dates
    Date date1(2, 8, 2014);
    Date date2(10, 15, 1944);
    cout << "Date 1: " << date1 << endl;
    cout << "Date 2: " << date2 << endl;
    // Creating two more dates, increment them and print them
    Date date3 = date1;
    Date date4 = date2;
    date3++;
    date4++;
    cout << "Date 3: " << date3 << endl;
    cout << "Date 4: " << date4 << endl;
    // Adding and Subtracting days to and from the previous dates
    date3 += 20;
    date4 -= 130;
    cout << "Date 3 after change: " << date3 << endl;
    cout << "Date 4 after change: " << date4 << endl;
    // Finding the difference and printing the number of days
    cout << "Difference between Date 3 and Date 4: " << date3 - date4 << " days." << endl;
    return 0;
}