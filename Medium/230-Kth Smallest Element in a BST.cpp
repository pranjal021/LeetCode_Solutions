class Solution {
public:
    
    int ans,l=0;
    
    void bst(TreeNode* root,int k){
        if(root){
            bst(root->left,k);
            l++;
            if(l==k){
                ans = root->val;
                return;
            }
            bst(root->right,k);
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        bst(root,k);
        return ans;
    }
};