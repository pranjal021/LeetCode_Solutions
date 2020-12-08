class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int> dp(n+1,0);
        
        dp[0] = cost[0];
        dp[1] = cost[1];
    
        for(int i=2;i<=n;i++){
            dp[i] = (i==n ? 0:cost[i]) + min(dp[i-1],dp[i-2]);
        }
            
        return dp[n];
    }
};
