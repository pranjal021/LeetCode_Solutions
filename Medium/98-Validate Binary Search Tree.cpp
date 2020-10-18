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
    
    bool validateBST(TreeNode* root,long long int min,long long int max){
        
        if(root==NULL)return true;
        
        //check condition for the current root
        if(root->val <= min || root->val >= max)
            return false;
        
        return validateBST(root->left, min, root->val)&& 
            validateBST(root->right, root->val, max);
        
    }
    
    bool isValidBST(TreeNode* root) {
        //here LLONG_MIN and LLONG_MAX is used instead of INT_MAX & INT_MIN 
        //because one of the test case is not passing;
        return validateBST(root,LLONG_MIN,LLONG_MAX);
    
    }
};
