#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        // Phase 1: Finding the intersection point in the cycle
        int slow = arr[0];
        int fast = arr[0];

        do {
            slow = arr[slow];          // Moves 1 step
            fast = arr[arr[fast]];     // Moves 2 steps
        } while (slow != fast);

        // Phase 2: Finding the entrance to the cycle (the duplicate)
        slow = arr[0];                 // Reset slow to the start

        while (slow != fast) {
            slow = arr[slow];          // Both move 1 step now
            fast = arr[fast];
        }

        return slow;                   // Or return fast; they are at the duplicate
    }
};

int main() {
    Solution solution;

    // Example test case: 2 is repeated
    vector<int> arr = {1, 3, 4, 2, 2};

    int duplicate = solution.findDuplicate(arr);

    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
