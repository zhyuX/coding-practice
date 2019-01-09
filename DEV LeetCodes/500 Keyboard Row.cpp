
// Given a List of words, return the words that can be typed using letters of alphabet on only one row's of American keyboard like the image below.

 
// Example:

// Input: ["Hello", "Alaska", "Dad", "Peace"]
// Output: ["Alaska", "Dad"]
 

// Note:

// You may use one character in the keyboard more than once.
// You may assume the input string will only contain letters of alphabet.

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> s1{'Q','W','E','R','T','Y','U','I','O','P'};
        unordered_set<char> s2{'A','S','D','F','G','H','J','K','L'};
        unordered_set<char> s3{'Z','X','C','V','B','N','M'};
        vector<string> result;
        
        for(int i = 0; i < words.size(); i++){
            int flag = 1; // yes
            int row1 = 0;
            int row2 = 0;
            int row3 = 0;
            for(int j = 0; j < words[i].size(); j++){
                char key = toupper(words[i][j]);
                
                if(s1.count(key)){
                    row1 = 1;
                }else if(s2.count(key)){
                    row2 = 1;
                }else if(s3.count(key)){
                    row3 = 1;
                }
                if(row1 + row2 + row3 > 1){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                result.push_back(words[i]);
            }
        }
        
        return result;
    }
};