class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1);
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2 ; i <= n ; i++){
            int min_val = INT_MAX;
            
            for(int j = 1 ; j * j <= i ; j++){
                
                int rem = i - j * j;
                
                if(dp[rem] < min_val){
                    min_val = dp[rem];
                }
                
            }
            
            dp[i] = min_val + 1;
        }
        
        return dp[n];
    }
};
