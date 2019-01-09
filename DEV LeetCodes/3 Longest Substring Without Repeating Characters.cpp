// Given a string, find the length of the longest substring without repeating characters.

// Examples:

// Given "abcabcbb", the answer is "abc", which the length is 3.

// Given "bbbbb", the answer is "b", with the length of 1.

// Given "pwwkew", the answer is "wke", with the length of 3. Note that the answer must be a substring, "pwke" is a subsequence and not a substring.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> list(256, -1);
        int result = 0, start = -1;
        for(int i = 0 ; i < s.size(); ++i){
            start = max(list[s[i]], start);
            list[s[i]] = i;
            result = max(result,i-start);
        }
        return result;
    }
};