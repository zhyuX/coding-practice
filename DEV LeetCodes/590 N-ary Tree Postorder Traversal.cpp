// Given an n-ary tree, return the postorder traversal of its nodes' values.

// For example, given a 3-ary tree:


// Return its postorder traversal as: [5,6,3,2,4,1].

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
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(!root)
            return res;

        if(root->children.size())
        {
            for(int i=0;i<root->children.size();i++)
            {
                vector<int> temp=postorder(root->children[i]);
                res.insert(res.end(),temp.begin(),temp.end());
            }
        }
        res.push_back(root->val);
        return res;
    }
};