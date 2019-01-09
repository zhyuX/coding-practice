// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Note that an empty string is also considered valid.

// Example 1:

// Input: "()"
// Output: true
// Example 2:

// Input: "()[]{}"
// Output: true
// Example 3:

// Input: "(]"
// Output: false
// Example 4:

// Input: "([)]"
// Output: false
// Example 5:

// Input: "{[]}"
// Output: true
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        if(s.size()==0){
            return true;
        }
        for(int i = 0; i < s.size(); ++i){
            if(stk.empty()){
                stk.push(s[i]);
            }
            else{
                if(stk.top()=='('&&s[i]==')'||
                  stk.top()=='['&&s[i]==']'||
                  stk.top()=='{'&&s[i]=='}'){
                    stk.pop();
                }else{
                    stk.push(s[i]);
                }
            }
        }
        return stk.empty();
    }
};