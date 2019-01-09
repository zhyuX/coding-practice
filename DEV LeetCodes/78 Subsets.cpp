// Given a set of distinct integers, nums, return all possible subsets (the power set).

// Note: The solution set must not contain duplicate subsets.

// Example:

// Input: nums = [1,2,3]
// Output:
// [
//   [3],
//   [1],
//   [2],
//   [1,2,3],
//   [1,3],
//   [2,3],
//   [1,2],
//   []
// ]

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int> > result(1);
        sort(result.begin(), result.end());
        for(int i = 0; i < nums.size(); ++i){
            int size = result.size();
            for (int j = 0; j < size; ++j){
                result.push_back(result[j]);
                result.back().push_back(nums[i]);
            }
                
        }
        return result;
    }
};