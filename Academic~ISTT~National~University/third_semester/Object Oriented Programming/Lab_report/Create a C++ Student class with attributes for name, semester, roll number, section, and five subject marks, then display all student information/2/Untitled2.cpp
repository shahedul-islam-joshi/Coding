#include <iostream>
#include <string> // Required for getline
using namespace std;

class Student {
    string name;
    int sem, roll;
    char sec;
    float m[5], total = 0;

public:
    void input() {
        cout << "Enter Name: ";
        getline(cin >> ws, name); // 'ws' clears the buffer to allow spaces
        cout << "Enter Sem, Roll, Sec: ";
        cin >> sem >> roll >> sec;
        cout << "Enter 5 marks: ";
        for(int i=0; i<5; i++) {
            cin >> m[i];
            total += m[i];
        }
    }

    void display() {
        cout << "\nName: " << name << "\nRoll: " << roll << " (" << sec << ")";
        cout << "\nSemester: " << sem << "\nTotal Marks: " << total << "/500\n";
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
