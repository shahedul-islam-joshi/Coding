#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    int semester;
    char section;
    float marks[5];
    float total, average;
    char grade;

public:
    void input() {
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Semester: ";
        cin >> semester;

        cout << "Enter Section: ";
        cin >> section;

        cout << "Enter marks of 5 subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "Subject " << i+1 << ": ";
            cin >> marks[i];
        }
    }

    void calculate() {
        total = 0;
        for(int i = 0; i < 5; i++) {
            total += marks[i];
        }

        average = total / 5;

        if(average >= 90) grade = 'A';
        else if(average >= 75) grade = 'B';
        else if(average >= 60) grade = 'C';
        else if(average >= 50) grade = 'D';
        else grade = 'F';
    }

    void display() {
        cout << "\n--- Student Result ---\n";
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Semester: " << semester << endl;
        cout << "Section: " << section << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}
