/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//method 1: recursive method

class Solution {
public:
    
    TreeNode* treeTraversal(TreeNode* root,vector<int> &res){
        if(root==NULL) return NULL;
        
        treeTraversal(root->left,res); 
        res.push_back(root->val);
        treeTraversal(root->right,res); 
        
        return root;
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode* head = treeTraversal(root,res);
        return res;
    }
};

//method 2: using stack

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        if(root==NULL)return v;
        stack<TreeNode*> s;
        TreeNode* curr = root;
        
        while(!s.empty() || curr!=NULL){
            while(curr!=NULL){
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            v.push_back(curr->val);
            curr=curr->right;
        }
        return v;
    }
};