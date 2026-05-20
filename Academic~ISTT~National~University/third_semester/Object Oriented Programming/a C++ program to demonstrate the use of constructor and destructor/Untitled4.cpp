#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor is called: Object created!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor is called: Object destroyed!" << endl;
    }
};

int main() {
    cout << "Entering main function..." << endl;

    Demo obj1;  // Constructor will be called here
    {
        Demo obj2;  // Constructor called again
        cout << "Inside inner block." << endl;
    }  // Destructor called automatically for obj2 (block ends)

    cout << "Back in main function." << endl;

    // When main ends, destructor will be called for obj1
    return 0;
}

