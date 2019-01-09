// Given a string, you need to reverse the order of characters in each word within 
// a sentence while still preserving whitespace and initial word order.

// Example 1:
// Input: "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Note: In the string, each word is separated by single space and there will not be any extra space in the string.

class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int size = s.size();
        stack<int> stk;
        for(int i = 0; i < size; ++i){
            if(s[i] == ' ' || i == size-1){
                if(i == size-1){
                    stk.push(s[i]);
                }
                while(!stk.empty()){
                    res += stk.top();
                    stk.pop();
                }
                if(s[i] == ' '){
                    res += ' ';
                }
            }
            else{
                stk.push(s[i]);
            }
        }
        return res;
    }
};