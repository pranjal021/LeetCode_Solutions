class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> v;
        dfs(res,v,1,n,k);
        return res;
    }
    
    void dfs(vector<vector<int>> &res,vector<int> &v,int index,int n,int k){
        if(v.size() == k){
            res.push_back(v);
            return;
        }
        for(int i=index;i<=n;i++){
            v.push_back(i);
            dfs(res,v,i+1,n,k);
            v.pop_back();
        }
        return;
    }
};
