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
    int sum;
    
    int sumNumbers(TreeNode* root) {
        sum = 0;
        if(!root) return 0;
        
        dfs(root,0);
        return sum;
    }
    
    void dfs(TreeNode* root,int curr){
        curr = curr*10 + root->val;
        
        if(root->left == NULL && root->right == NULL){
            sum += curr;
        }
        
        if(root->left){
            dfs(root->left,curr);
        }
        if(root->right){
            dfs(root->right,curr);
        }
        
        return;
    }
};
