class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();
        
        int dp[n+1][m+1];
        memset(dp, 0, sizeof dp);
        
        for(int i=n;i>=0;i--){
            for(int j=m;j>=0;j--){
                
                if(i == n && j == m){
                    
                    dp[i][j] = 0; 
                    
                }else if(i == n){
                    
                    dp[i][j] = dp[i][j+1] + (int)(s2[j]);
                    
                }else if(j == m){
                    
                    dp[i][j] = dp[i+1][j] + (int)(s1[i]);
                    
                }else{
                    
                    if(s1[i] == s2[j]){
                        dp[i][j] = dp[i+1][j+1];
                    }else{
                        
                        int v1 = (int)(s1[i]) + dp[i+1][j];
                        int v2 = (int)(s2[j]) + dp[i][j+1];
                        dp[i][j] = min(v1, v2);
                        
                    }
                    
                }
                
            }
        }
        
        return dp[0][0];
    }
};
