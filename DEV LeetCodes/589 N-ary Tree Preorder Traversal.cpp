// Given an n-ary tree, return the preorder traversal of its nodes' values.

// For example, given a 3-ary tree:

// Return its preorder traversal as: [1,3,5,6,2,4].

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        
        if(root == NULL){
            return res;
        }
        int size = root->children.size();
        if(size == 0){
            res.push_back(root->val);
            return res;
        }else{
            res.push_back(root->val);
            for(int i = 0; i < size; ++i){
                vector<int> temp = preorder(root->children[i]);
                res.insert(res.end(), temp.begin(), temp.end());
            }
            return res;
        }
    }
};