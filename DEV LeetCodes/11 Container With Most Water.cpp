// Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). 
// n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). 
// Find two lines, which together with x-axis forms a container, 
// such that the container contains the most water.

// Note: You may not slant the container and n is at least 2.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int theMax = 0;
        int temp;
        for(int i = 0; i < height.size(); ++i){
            for(int j = i; j < height.size(); ++j){
                temp = getArea(height[i],height[j],j-i);
                if(temp > theMax){
                    theMax = temp;
                }
            }
        }
        return theMax;
    }
    int getArea(int h1, int h2, int distance){
        int h = h1<h2?h1:h2;
        return h*distance;
    }
};