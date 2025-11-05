#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    bool operator==(const Time& t) const {
        return hours == t.hours && minutes == t.minutes && seconds == t.seconds;
    }

    bool operator<(const Time& t) const {
        return hours < t.hours || (hours == t.hours && minutes < t.minutes) || (hours == t.hours && minutes == t.minutes && seconds < t.seconds);
    }
};

int main() {
    Time t1(10, 30, 45); 
    Time t2(10, 30, 45); 
    Time t3(9, 45, 30); 

    cout << "Time 1: ";
    t1.display();
    
    cout << "Time 2: ";
    t2.display();
    
    cout << "Time 3: ";
    t3.display();
    cout << "\nComparing Time 1 and Time 2:" << endl;
    cout << "Time 1 == Time 2: " << (t1 == t2 ? "True" : "False") << endl;
    cout << "Time 1 < Time 2: " << (t1 < t2 ? "True" : "False") << endl;

    cout << "\nComparing Time 1 and Time 3:" << endl;
    cout << "Time 1 == Time 3: " << (t1 == t3 ? "True" : "False") << endl;
    cout << "Time 1 < Time 3: " << (t1 < t3 ? "True" : "False") << endl;

    return 0;
}
