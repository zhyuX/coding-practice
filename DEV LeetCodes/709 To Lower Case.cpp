// Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

// Example 1:

// Input: "Hello"
// Output: "hello"
// Example 2:

// Input: "here"
// Output: "here"
// Example 3:

// Input: "LOVELY"
// Output: "lovely"


class Solution {
public:
    string toLowerCase(string str) {
        string lowerStr = "";
        int gap = 'A' - 'a';
        for(int i = 0; i < str.size(); ++i){
            if(isupper(str[i])){
                lowerStr += (str[i] - gap);
            }
            else{
                lowerStr += str[i];
            }
        }
        return lowerStr;
    }
};