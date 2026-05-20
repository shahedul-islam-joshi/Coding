#include <iostream>
using namespace std;

class TIME {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize
    TIME() : hours(0), minutes(0), seconds(0) {}

    void input() {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    // Function taking objects as arguments
    void addTime(TIME t1, TIME t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = seconds / 60; // Carry over to minutes
        seconds = seconds % 60; // Remainder seconds

        minutes = minutes + t1.minutes + t2.minutes;
        hours = minutes / 60;   // Carry over to hours
        minutes = minutes % 60; // Remainder minutes

        hours = hours + t1.hours + t2.hours;
    }

    void display() {
        // Simple formatting to show 00:00:00 style
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main() {
    TIME t1, t2, t3;

    cout << "Time 1:" << endl;
    t1.input();

    cout << "Time 2:" << endl;
    t2.input();

    // Passing objects to the function
    t3.addTime(t1, t2);

    cout << "\nTotal Time: ";
    t3.display();

    return 0;
}
