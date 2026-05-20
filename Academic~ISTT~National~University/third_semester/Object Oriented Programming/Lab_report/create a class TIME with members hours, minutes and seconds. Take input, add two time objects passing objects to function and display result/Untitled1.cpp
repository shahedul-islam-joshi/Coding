#include <iostream>
using namespace std;

class TIME {
public:
    int hours, minutes, seconds;

    void getTime() {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    void displayTime() {
        cout << hours << " : " << minutes << " : " << seconds << endl;
    }
};

// Function to add two TIME objects
TIME addTime(TIME t1, TIME t2) {
    TIME t3;

    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t1.minutes + t2.minutes + (t3.seconds / 60);
    t3.seconds = t3.seconds % 60;

    t3.hours = t1.hours + t2.hours + (t3.minutes / 60);
    t3.minutes = t3.minutes % 60;

    return t3;
}

int main() {
    TIME t1, t2, t3;

    cout << "Enter first time\n";
    t1.getTime();

    cout << "Enter second time\n";
    t2.getTime();

    t3 = addTime(t1, t2); // passing objects to function

    cout << "Sum of two times: ";
    t3.displayTime();

    return 0;
}

