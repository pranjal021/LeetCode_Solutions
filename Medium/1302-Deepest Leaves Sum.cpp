class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        int res = 0, i;
        q.push(root);
        
        while(q.size() > 0){
            
            for(i = q.size()-1, res = 0; i >= 0 ; i--){
                auto f = q.front();
                q.pop();
                res += f->val;
                
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            
        }
        
        return res;
    }
};
