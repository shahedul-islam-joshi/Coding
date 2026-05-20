#include <iostream>
using namespace std;

int main() {
    // Example array and target
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    // Outer loop: picks the first number
    for (int i = 0; i < sizeof(nums); i++) {

        // Inner loop: picks the second number
        for (int j = i + 1; j < sizeof (nums); j++) {

            // If we find the match, print it and close the program immediately
            if (nums[i] + nums[j] == target) {
                cout << "Indices found: " << i << " and " << j << endl;
                cout << "Because " << nums[i] << " + " << nums[j] << " = " << target << endl;

                return 0; // Exits the main() function right here
            }
        }
    }

    // If the loops completely finish, it means the 'return 0' above was never triggered.
    // Therefore, no matching pair exists.
    cout << "No two numbers add up to the target." << endl;

    return 0;
}
