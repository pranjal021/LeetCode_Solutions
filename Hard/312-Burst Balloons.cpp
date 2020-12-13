class Solution {
public:
    int maxCoins(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        vector<int> v(nums.size()+2,1);
        for(int i=0;i<nums.size();i++)
        {
            v[i+1]=nums[i];
        }
        vector<vector<int>> dp(v.size(),vector<int> (v.size(),-1));
        return helper(v,1,v.size()-1,dp);
    }
    
    int helper(vector<int> &v, int i, int j,vector<vector<int>> &dp)
    {
        if(i>=j)
            return 0;
        if(dp[i][j]>=0)
            return dp[i][j];
        int cost=INT_MIN;
        for(int k=i;k<=j-1;k++)
        {
            cost=max(cost, helper(v,i,k,dp)+helper(v,k+1,j,dp)+ v[i-1]*v[k]*v[j]);
        }
        dp[i][j]=cost;
        return cost;
    }
};
