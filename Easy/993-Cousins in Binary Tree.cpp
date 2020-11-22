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
    
    TreeNode* getDepth(TreeNode* root,int val,int depth,int &level){
        if(root == NULL) return NULL;
        
        if(root->left && root->left->val == val || root->right && root->right->val == val){
            level = depth;
            return root;
        }
        
        TreeNode* l = getDepth(root->left,val,depth+1,level);
        if(l) return l;
        
        TreeNode* r = getDepth(root->right,val,depth+1,level);
        if(r) return r;
        
        return NULL;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        int x_depth = -1, y_depth = -1;
        TreeNode* x_parent = getDepth(root,x,0,x_depth);
        TreeNode* y_parent = getDepth(root,y,0,y_depth);
        if(x_depth != y_depth || x_parent == y_parent){
            return false;
        }
        return true;
    }
};
