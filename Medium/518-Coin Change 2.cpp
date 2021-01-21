class Solution {
public:
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        
        int dp[amount+1];
        memset(dp, 0, sizeof dp);
        
        dp[0] = 1;
        
        for(auto coin: coins){
            for(int i = coin ; i <= amount ; i++){
                dp[i] += dp[i-coin];
            }
        }
        
        return dp[amount];
    }
};
