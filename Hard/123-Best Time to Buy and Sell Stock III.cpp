class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        int mpist = 0;
        int lsp = prices[0];
        vector<int> dp1(n,0);
        
        for(int i=1;i<n;i++){
            if(prices[i] < lsp){
                lsp = prices[i];
            }
            mpist = prices[i] - lsp;
            if(mpist > dp1[i-1]){
                dp1[i] = mpist;
            }else{
                dp1[i] = dp1[i-1];
            }
        }
        
        int mpibt = 0;
        int maxat = prices[n-1];
        vector<int> dp2(n,0);
        
        for(int i=n-2;i>=0;i--){
            if(prices[i] > maxat){
                maxat = prices[i];
            }
            mpibt = maxat - prices[i];
            
            if(mpibt > dp2[i+1]){
                dp2[i] = mpibt;
            }else{
                dp2[i] = dp2[i+1];
            }
        }
        
        int op=0;
        
        for(int i=0;i<n;i++){
            if(dp1[i] + dp2[i] > op){
                op = dp1[i] + dp2[i];
            }
        }
        
        return op;
    }
};
