#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int val : nums) {
            // Fixed: s.end() takes no parameters
            if (s.find(val) != s.end()) {
                return val;
            }
            s.insert(val);
        }
        return -1;
    }
};

int main() {
    Solution solution;

    // Example test case
    vector<int> nums = {1, 3, 4, 2, 2};

    int duplicate = solution.findDuplicate(nums);

    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}
