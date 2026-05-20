#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int n = grid.size();
        int a = 0, b = 0; // Initialized to 0 to prevent garbage values

        int expSum = 0, actualSum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actualSum += grid[i][j];

                // If the number is already in the set, it's our repeated number 'a'
                if (s.find(grid[i][j]) != s.end()) {
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }

        // Calculate expected sum of numbers from 1 to n^2
        expSum = (n * n) * (n * n + 1) / 2;

        // Find missing number 'b' using the sum difference math
        b = expSum + a - actualSum;
        ans.push_back(b);

        return ans;
    }
};

int main() {
    Solution solver;

    // LeetCode Example 2 Input
    vector<vector<int>> grid = {
        {9, 1, 7},
        {8, 9, 2},
        {3, 4, 6}
    };

    // Running your logic
    vector<int> result = solver.findMissingAndRepeatedValues(grid);

    // Printing Output
    cout << "Output: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
