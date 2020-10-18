class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        ios_base::sync_with_stdio(false);
        
        cin.tie(NULL);
        
        if(k==0 || prices.size()==0) return 0;
        
        int n=prices.size();
        
        if (k>n/2){
            
        int ans = 0;
            
        for (int i=1; i<n; ++i){
            
            ans += max(prices[i] - prices[i-1],0);
            
        }
            
        return ans;
            
    }
        vector<vector<int> > dp(prices.size()+1,vector<int>(k+1));
        
        for(int i=0;i<=n;i++){
            
            dp[i][0]=0;
        }
        
        for(int i=1;i<=k;i++){
            
            dp[n-1][i]=0;
            
            dp[n][i]=0;
        }
        
        for(int l=1;l<=k;l++){
            
            int ma=0,maxi=dp[n-1][l],tmp=prices[n-1]+dp[n][l-1];
            
            for(int i=n-2;i>=0;i--){
                      ma=max(ma,max(maxi,tmp-prices[i]));
                
                      maxi=max(maxi,dp[i][l]);
                
                      tmp=max(tmp,prices[i]+dp[i+1][l-1]);
                
                      dp[i][l]=ma;
            }
            
        }
    
        return dp[0][k];
        
    }
};