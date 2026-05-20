#include <iostream>
using namespace std;

#define MAX 5
int stack[MAX], top = -1;

void push() {
    int x;
    if (top == MAX - 1)
        cout << "Overflow\n";
    else {
        cin >> x;
        stack[++top] = x;
    }
}

void pop() {
    if (top == -1)
        cout << "Underflow\n";
    else
        cout << stack[top--] << endl;
}

void display() {
    for (int i = top; i >= 0; i--)
        cout << stack[i] << " ";
    cout << endl;
}

int main() {
    int ch;
    do {
        cout << "1.Push 2.Pop 3.Display 4.Exit\n";
        cin >> ch;
        if (ch == 1) push();
        else if (ch == 2) pop();
        else if (ch == 3) display();
    } while (ch != 4);
    return 0;
}
