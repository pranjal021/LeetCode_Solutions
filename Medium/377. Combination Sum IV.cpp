class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        vector<unsigned long> dp(target+1,0);
       
        dp[0] = 1;
        
        for(int i=1;i<=target;i++){
            int ways = 0;
            for(int j=0;j<n;j++){
                if(i - nums[j] < 0) break;
                ways += dp[i - nums[j]];
            }
            dp[i] = ways;
        }
        
        return dp[target];
    }
};
