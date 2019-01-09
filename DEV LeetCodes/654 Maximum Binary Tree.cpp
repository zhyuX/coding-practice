// Given an integer array with no duplicates. A maximum tree building on this array is defined as follow:

// The root is the maximum number in the array.
// The left subtree is the maximum tree constructed from left part subarray divided by the maximum number.
// The right subtree is the maximum tree constructed from right part subarray divided by the maximum number.
// Construct the maximum tree by the given array and output the root node of this tree.

// Example 1:
// Input: [3,2,1,6,0,5]
// Output: return the tree root node representing the following tree:

//       6
//     /   \
//    3     5
//     \    / 
//      2  0   
//        \
//         1
// Note:
// The size of the given array will be in the range [1,1000].

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        // boundary conditon
        if(nums.size() == 1){
            TreeNode* tree = new TreeNode(nums[0]);
            return tree;
        }else if(nums.size() == 0){
            return NULL;;
        }
        else{
            vector<int>::iterator maxP= max_element(nums.begin(), nums.end());
            int maxIdx = maxP - nums.begin();
            
            vector<int> left, right;
            for(int i = 0; i < maxIdx; ++i){
                left.push_back(nums[i]);
            }
            for(int i = maxIdx+1; i < nums.size(); ++i){
                right.push_back(nums[i]);
            }
            
            TreeNode* tree = new TreeNode(nums[maxIdx]);
            tree->left = constructMaximumBinaryTree(left);
            tree->right = constructMaximumBinaryTree(right);
            return tree;
        }
    }
};