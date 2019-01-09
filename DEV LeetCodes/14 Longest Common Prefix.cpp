// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Example 1:

// Input: ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
// Note:

// All given inputs are in lowercase letters a-z.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int theMin = 999;
        if(strs.size() == 0){
            return "";
        }
        for(int i = 0; i < strs.size(); ++i){
            if(strs[i].length() < theMin){
                theMin = strs[i].length();
            }
        }
        char temp;
        int flag = 1;
        for(int i = 0; i < theMin; ++i){
            if(flag){
                temp = strs[0][i];
                for(int j = 0; j < strs.size(); ++j){
                    if(temp != strs[j][i]){
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                    prefix += temp;
            }
        }
        return prefix;
    }
};