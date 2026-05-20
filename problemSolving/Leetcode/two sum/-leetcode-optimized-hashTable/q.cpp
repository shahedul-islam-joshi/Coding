class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> num_with_index;
        for (int i = 0; i < nums.size(); i++) {
            num_with_index.push_back({nums[i], i});
        }

        sort(num_with_index.begin(), num_with_index.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int current_sum = num_with_index[left].first + num_with_index[right].first;

            if (current_sum == target) {
                return {num_with_index[left].second, num_with_index[right].second};
            }
            else if (current_sum < target) {
                left++; 
            }
            else {
                right--; 
            }
        }

        return {}; 
    }
};
