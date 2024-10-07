// Application file for the time class
#include "time.h"

int main(){
    Time time;
    cout << "Initial Time: ";
    time.displayTime();
    cout << "Time after 1 tick: ";
    ++time;
    time.displayTime();
    cout << "Time from midnight in seconds: " << time() << " seconds" << endl;
    cout << "Adding 3661 seconds to time: ";
    time += 3661;
    time.displayTime();
    return 0;
}