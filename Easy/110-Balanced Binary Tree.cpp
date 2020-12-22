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
class Solution {
public:
    
    pair<int,bool> helper(TreeNode* root){
        if(!root) return {0,true};
        
        pair<int,bool> l = helper(root->left);
        pair<int,bool> r = helper(root->right);
        
        int h = max(l.first,r.first)+1;
        bool a = false;
        if(l.second && r.second && abs(l.first-r.first) <= 1){
            a = true;
        }
        return {h,a};
    }
    
    bool isBalanced(TreeNode* root) {
        
        pair<int,bool> ans = helper(root);
        return ans.second;
    
    }
};
