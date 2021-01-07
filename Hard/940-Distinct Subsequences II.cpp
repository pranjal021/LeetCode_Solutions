class Solution {
public:
    int distinctSubseqII(string S) {
        
        int n = S.size();
        int dp[n+1];
        int mod = 1000000007;
        
        memset(dp,0,sizeof dp);
        dp[0] = 1;
        
        unordered_map<char,int> m;
        
        for(int i = 1 ; i < n+1 ; i++){
            
            dp[i] = (2 * dp[i-1]) % mod;
            
            char ch = S[i-1];
            
            if(m.count(ch)){
                
                int j = m[ch];
                dp[i] -= dp[j-1]; 
                dp[i] %= mod;
                
            }
            
            m[ch] = i;
        }
        
        dp[n]--;
        
        if(dp[n] < 0) dp[n] += mod;
        
        return dp[n];
    }
};
