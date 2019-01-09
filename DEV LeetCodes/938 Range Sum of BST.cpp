// Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

// The binary search tree is guaranteed to have unique values.

 

// Example 1:

// Input: root = [10,5,15,3,7,null,18], L = 7, R = 15
// Output: 32
// Example 2:

// Input: root = [10,5,15,3,7,13,18,1,null,6], L = 6, R = 10
// Output: 23
 

// Note:

// The number of nodes in the tree is at most 10000.
// The final answer is guaranteed to be less than 2^31.
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
    int rangeSumBST(TreeNode* root, int L, int R) {
        vector<int> list;
        inOrder(root, list);
        int sum = 0;
        int flag = 0;
        for(int i = 0; i <list.size(); ++i){
            //flag = 0;
            if(list[i] == L){
                flag = 1;
            }
            if(flag){
                sum += list[i];
                if(list[i] == R){
                    break;
                }
            }
        }
        return sum;
    }
    
    // 递归进行中序遍历
    void inOrder(TreeNode* root,vector<int> &list){
        if(root->left==NULL && root->right==NULL){
            list.push_back(root->val);
        }
        else if(root->left==NULL && root->right!=NULL){
            list.push_back(root->val);
            inOrder(root->right,list);
        }
        else if(root->left!=NULL && root->right==NULL){
            inOrder(root->left,list);
            list.push_back(root->val);
        }
        else{
            inOrder(root->left,list);
            list.push_back(root->val);
            inOrder(root->right,list);
        }
    }
};