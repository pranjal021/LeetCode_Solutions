class Solution {
public:
    int maxCoins(vector<int>& nums) {
        
        int n = nums.size();
        int dp[n][n];
        memset(dp, 0, sizeof dp);
        
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                
                int m = INT_MIN;
                for(int k=i;k<=j;k++){
                    int left = k == i ? 0 : dp[i][k-1];
                    int right = k == j ? 0 : dp[k+1][j];
                    int val = (i==0 ? 1 : nums[i-1]) * nums[k] * (j == n-1 ? 1 : nums[j+1]);
                    
                    int t = left + right + val;
                    if(t > m){
                        m = t;
                    }
                    
                }
                
                dp[i][j] = m; 
            }
        }
        
        return dp[0][n-1];
    }
};
