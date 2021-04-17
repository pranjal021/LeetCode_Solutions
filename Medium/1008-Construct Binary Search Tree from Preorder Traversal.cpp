class Solution {
public:
    
    int idx = 0;
    TreeNode* bstFromPreorder_(vector<int> &preorder,int lr,int rr){
        
        if(idx >= preorder.size() || preorder[idx] < lr || preorder[idx] > rr) return NULL;
        
        TreeNode* node = new TreeNode(preorder[idx++]);
        node->left = bstFromPreorder_(preorder, lr, node->val);
        node->right = bstFromPreorder_(preorder, node->val, rr);
        
        return node;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        int n = preorder.size();
        int lr = -(int)1e9-1;
        int rr = (int)1e9+1;
        
        return bstFromPreorder_(preorder,lr,rr);
    }
};
