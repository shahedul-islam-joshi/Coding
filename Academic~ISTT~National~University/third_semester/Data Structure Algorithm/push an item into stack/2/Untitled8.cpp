#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int item;
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    cout << "Enter item to push: ";
    cin >> item;
    stack[++top] = item;
    cout << "Item pushed successfully\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return;
    }
    cout << "Popped item: " << stack[top--] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack elements:\n";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: cout << "Exiting program\n"; break;
            default: cout << "Invalid choice\n";
        }
    } while (choice != 4);

    return 0;
}

