class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int ans = 0;
        int n = nums.size();
        
        vector<int> dp(n,0);
        
        for(int i=0;i<n;i++){
            int max = 0;
            
            for(int j=0;j<i;j++){
                if((nums[j] < nums[i]) && (dp[j] > max)){
                    max = dp[j];
                }
            }
            
            dp[i] = max+1;
            
            if(dp[i] > ans){
                ans = dp[i];
            }
        }
        
        return ans;
    }
};
