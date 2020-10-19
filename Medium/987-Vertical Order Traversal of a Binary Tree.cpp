class Solution {
public:
    map<int,set<pair<int,int> >>m;
    
    void solve(TreeNode* root,int h_level,int v_level){
        if(root==NULL)return;
        m[h_level].insert({v_level,root->val});
        solve(root->left,h_level-1,v_level+1);
        solve(root->right,h_level+1,v_level+1);
        return;
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        solve(root,0,0);
        vector<vector<int>> res;
        for(auto x:m){
            vector<int> v;
            for(auto val:x.second)
                v.push_back(val.second);
            res.push_back(v);
        }
        return res;
    }
};
