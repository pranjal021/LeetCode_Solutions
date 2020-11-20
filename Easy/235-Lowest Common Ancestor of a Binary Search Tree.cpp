/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL) return NULL;
        
        if(root->val == p->val || root->val == q->val){
            return root;
        }
        
        TreeNode* ld = lowestCommonAncestor(root->left,p,q);
        TreeNode* rd = lowestCommonAncestor(root->right,p,q);
        
        if(ld!=NULL && rd!=NULL)
            return root;
        
        if(ld!=NULL)
            return ld;
        else
            return rd;
        
    }
};







