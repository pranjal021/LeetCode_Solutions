class Solution {
public:
    
    void dfs(vector<int> &nums,vector<vector<int>> &res,vector<int> &v,int index){
        res.push_back(v);
        for(int i=index;i<nums.size();i++){
            if(i > index && nums[i] == nums[i-1]) continue;
            v.push_back(nums[i]);
            dfs(nums,res,v,i+1);
            v.pop_back();
        }
        return;
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> v;
        dfs(nums,res,v,0);
        return res;
    }
};
