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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        
        return deep(root).second;
        
    }
    
    pair<int, TreeNode*> deep(TreeNode* root){
        if(!root) return {0, NULL};
        
        pair<int, TreeNode*> l = deep(root->left);
        pair<int, TreeNode*> r = deep(root->right);
        
        int d1 = l.first;
        int d2 = r.first;
        
        return {max(d1,d2) + 1 , d1 == d2 ? root : d1 > d2 ? l.second : r.second};
    }
    
};
