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
    
    TreeNode* lca;
    int deepest = 0;
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        helper(root, 0);
        return lca;
    }
    
    int helper(TreeNode* root,int depth){
        
        deepest = max(depth, deepest);
        
        if(!root) return depth;
        
        int left = helper(root->left,depth+1);
        int right = helper(root->right, depth+1);
        
        if(left == deepest && right == deepest) lca = root;
        
        return max(left,right);
        
    }
};
