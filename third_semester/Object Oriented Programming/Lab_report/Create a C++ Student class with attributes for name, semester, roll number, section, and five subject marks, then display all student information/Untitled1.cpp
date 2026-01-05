#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int semester;
    int rollNo;
    char section;
    int marks[5];

public:
    void getData() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter semester: ";
        cin >> semester;

        cout << "Enter section: ";
        cin >> section;

        cout << "Enter marks in 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    void displayData() {
        cout << "\nStudent Details\n";
        cout << "Name      : " << name << endl;
        cout << "Roll No   : " << rollNo << endl;
        cout << "Semester  : " << semester << endl;
        cout << "Section   : " << section << endl;
        cout << "Marks     : ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Student s;

    s.getData();
    s.displayData();

    return 0;
}

