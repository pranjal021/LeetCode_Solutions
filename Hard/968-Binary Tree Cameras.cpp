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
    
    int cameras = 0;
    int state;
    
    int minCameraCover_(TreeNode* root){
        
        if(root == NULL) return 1;
        
        int l = minCameraCover_(root->left);
        int r = minCameraCover_(root->right);
        
        if(l == -1 || r == -1){
            cameras++;
            return 0;
        }
        
        if(l == 0 || r == 0){
            return 1;
        }
        
        return -1;
    }
    
    int minCameraCover(TreeNode* root) {
        
        int ans = minCameraCover_(root);
        
        if(ans == -1) cameras++;
        
        return cameras;
    }
};
