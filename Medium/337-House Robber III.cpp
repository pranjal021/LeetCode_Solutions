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

struct RobbedRoot{
    int robbedRoot;
    int skippedRoot;
};

class Solution {
public:
    
    RobbedRoot dfs(TreeNode* root){
        
        if(root == NULL) return RobbedRoot{0,0};
        
        RobbedRoot l = dfs(root->left);
        RobbedRoot r = dfs(root->right);
        
        int robThisNode = root->val + l.skippedRoot + r.skippedRoot;
        int skipThisNode = max(l.robbedRoot,l.skippedRoot) + max(r.robbedRoot,r.skippedRoot);
        
        return RobbedRoot{robThisNode,skipThisNode};
        
    }
    
    int rob(TreeNode* root) {
        RobbedRoot finalRoot = dfs(root);
        
        return max(finalRoot.robbedRoot, finalRoot.skippedRoot);
    }
};
