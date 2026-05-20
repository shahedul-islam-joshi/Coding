
#include <iostream>
using namespace std;

int main() {
    // Crucial: The array MUST be sorted for this to work!
    int nums[] = {2, 7, 11, 15};
    int size = 4;
    int target = 9;

    // Start one pointer at the beginning, and one at the end
    int left = 0;
    int right = size - 1;

    // Loop until the two pointers cross each other
    while (left < right) {
        int current_sum = nums[left] + nums[right];

        // Case 1: We found the match!
        if (current_sum == target) {
            cout << "Values found: " << nums[left] << " and " << nums[right] << endl;
            cout << "Indices: " << left << " and " << right << endl;
            return 0; // Exit the program early
        }
        // Case 2: The sum is too small, move left pointer rightward to get a bigger number
        else if (current_sum < target) {
            left++;
        }
        // Case 3: The sum is too big, move right pointer leftward to get a smaller number
        else {
            right--;
        }
    }

    // If the loop finishes without returning, no pair exists
    cout << "No two numbers add up to the target." << endl;
    return 0;
}
