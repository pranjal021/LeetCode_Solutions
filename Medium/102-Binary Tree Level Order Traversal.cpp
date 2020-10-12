class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int> > v;
        TreeNode* n;
        
        if(root==NULL)return v;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int len = q.size();
            vector<int> ans;
            
            for(int i=0;i<len;i++){
                n = q.front();
                q.pop();
                ans.push_back(n->val);
                
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
            }
            v.push_back(ans);
            
        }
        return v;
        
    }
};