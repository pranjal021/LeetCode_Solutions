class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        
        if(root->val == val){
            return root;
        }else if(val < root->val){
            return searchBST(root->left,val);
        }else{
            return searchBST(root->right,val);
        }
    
    }
};
