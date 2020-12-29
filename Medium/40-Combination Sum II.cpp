class Solution {
public:
    
    void dfs(vector<int>& candidates,int index,vector<vector<int>> &res,vector<int> &v,int target){
        if(target < 0) return;
        if(target == 0){
            res.push_back(v);
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            if(i > index && candidates[i] == candidates[i-1]) continue;
            v.push_back(candidates[i]);
            dfs(candidates,i+1,res,v,target-candidates[i]);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        vector<int> v;
        dfs(candidates, 0, res, v, target);
        return res;
    }
};40. Combination Sum II.cpp
