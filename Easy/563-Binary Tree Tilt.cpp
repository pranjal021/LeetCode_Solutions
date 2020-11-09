class Solution {
public:
    
    int helper(TreeNode* root,int &fsum){
        if(root==NULL) return 0;
        
        int sum = root->val;
        
        int suml = helper(root->left,fsum);
        int sumr = helper(root->right,fsum);
        
        fsum += abs(suml-sumr);
        
        return sum+suml+sumr;
    }
    
    int findTilt(TreeNode* root) {
        int fsum = 0;
        helper(root,fsum);
        return fsum;
    }
};
