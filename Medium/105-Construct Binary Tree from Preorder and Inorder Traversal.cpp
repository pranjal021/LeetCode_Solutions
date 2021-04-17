class Solution {
public:
    
    TreeNode* buildTree_(vector<int> &preorder, int psi, int pei, vector<int> &inorder, int isi, int iei){
        
        if(isi > iei) return NULL;
        
        int idx = isi;
        while(inorder[idx] != preorder[psi]) idx++;
        int colse = idx - isi;
        
        TreeNode* node = new TreeNode(preorder[psi]);
        
        node->left = buildTree_(preorder, psi+1, psi+colse, inorder, isi, idx-1);
        node->right = buildTree_(preorder, psi+colse+1, pei, inorder, idx+1, iei);
        
        return node;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = preorder.size();
        return buildTree_(preorder, 0, n-1, inorder, 0, n-1);
    }
};
