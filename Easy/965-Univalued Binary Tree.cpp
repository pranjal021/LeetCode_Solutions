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
    
    bool helper(TreeNode* root,int ans){
        if(!root) return true;
        
        if(root->val != ans){
            return false;
        }
        
        return helper(root->left,ans) && helper(root->right,ans);
    }
    
    bool isUnivalTree(TreeNode* root) {
        
        int rootVal = root->val;
        return helper(root,rootVal);
        
    }
};
