class Solution {
public:
    
    void solve(vector<int>& nums, int idx,vector<int> &r, vector<vector<int>> &ans, vector<bool> &visited){
        
        if(idx == nums.size()){
            ans.push_back(r);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(visited[i] == false){
                visited[i] = true;
                r.push_back(nums[i]);
                solve(nums, idx+1,r,ans, visited);
                r.pop_back();
                visited[i] = false;
            }
           
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> r;
        int n = nums.size();
        vector<bool> visited(n);
        
        solve(nums, 0, r, ans, visited);
        
        return ans;
    }
};
