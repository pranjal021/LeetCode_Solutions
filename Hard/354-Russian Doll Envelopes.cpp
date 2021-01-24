class Solution {
public:
    
    static bool mycomp(vector<int> &a,vector<int> &b){
        if(a[0] == b[0]){
            return a[1] < b[1];
        }
        return a[0] < b[0];
    }
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        sort(envelopes.begin(), envelopes.end(), mycomp); // sorting envelopes based on their widths
        
        int n = envelopes.size();
        
        if(n == 0) return 0; //base check
        
        vector<int> dp(n); 
        
        for(int i = 0 ; i < n ; i++){
            int max = 0;
            
            for(int j = 0 ; j < i ; j++){
                //for every 'j', we are checking here that, jth box width & jth box height 
                //should be less than ith box width & ith box height
                if(envelopes[j][0] < envelopes[i][0] && envelopes[j][1] < envelopes[i][1]){
                    
                    if(dp[j] > max){
                        max = dp[j];
                    }
                    
                }
                
            }
            
            dp[i] = max+1;
        }
        
        return *max_element(dp.begin(), dp.end());
    }
};
