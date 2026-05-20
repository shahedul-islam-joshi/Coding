#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int id;
    string department;
    double salary;

    void display() {
        cout << "ID: " << id << " | Name: " << name
             << " | Dept: " << department << " | Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee emp[100]; // Array with a maximum capacity of 100

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); // Clears the input buffer
        getline(cin, emp[i].name);
        cout << "ID: ";
        cin >> emp[i].id;
        cout << "Department: ";
        cin >> emp[i].department;
        cout << "Salary: ";
        cin >> emp[i].salary;
    }

    double threshold;
    cout << "\nEnter salary threshold to filter: ";
    cin >> threshold;

    cout << "\n--- Displaying Results ---\n";
    for (int i = 0; i < n; i++) {
        if (emp[i].salary > threshold) {
            emp[i].display();
        }
    }

    return 0;
}
