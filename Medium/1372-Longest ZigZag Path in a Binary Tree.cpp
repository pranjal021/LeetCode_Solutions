class Solution {
public:
    
    int maxlen = 0;
    
    pair<int,int> longestZigZag_(TreeNode* root){
        
        if(root == NULL) return{-1,-1};
        
        pair<int,int> l = longestZigZag_(root->left);
        pair<int,int> r = longestZigZag_(root->right);
        
        pair<int,int> m;
        
        maxlen = max(maxlen, max(l.second, r.first) + 1);
        m.first = 1 + l.second;
        m.second = 1 + r.first;
        return m;
    }
    
    int longestZigZag(TreeNode* root) {
        
        pair<int,int> p = longestZigZag_(root);
        return maxlen;
        
    }
};
