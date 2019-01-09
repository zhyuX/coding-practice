// Given a non-empty array of integers, return the k most frequent elements.

// Example 1:

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]
// Example 2:

// Input: nums = [1], k = 1
// Output: [1]
// Note:

// You may assume k is always valid, 1 ≤ k ≤ number of unique elements.
// Your algorithm's time complexity must be better than O(n log n), where n is the array's size.
class Solution {
public:
    
    static bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i = 0; i < nums.size(); ++i){
            if(m.count(nums[i]) == 0){
                m[nums[i]] = 1;
            }else{
                m[nums[i]] += 1;
            }
        }
        
        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), cmp);
        
        vector<int> res;
        for(int i = 0; i < k; ++i){
            res.push_back(vec[i].first);
        }
        return res;
    }
};