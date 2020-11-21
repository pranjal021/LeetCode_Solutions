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
    
    int sum = 0;
    
    bool isLeaf(TreeNode* root){
        return !root->left && !root->right;
    }
    
    void dfs(TreeNode* root){
        if(root){
            if(root->left){
                if(isLeaf(root->left)){
                    sum += (root->left)->val;
                }else{
                    dfs(root->left);
                }
            }
            if(root->right) dfs(root->right);
        }  
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        dfs(root);
        return sum;
    }
};
