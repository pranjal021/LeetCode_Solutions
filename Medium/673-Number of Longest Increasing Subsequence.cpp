class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (nums.size() <= 1)
            return nums.size();
        
        vector<int> dp_len(n, 1);
        vector<int> dp_count(n, 1);
        
        for (int i=1; i<n; i++) {
            for (int j=0; j<i; j++) {
                if (nums[j] < nums[i]) {
                    if (dp_len[i] <= dp_len[j]){
                        dp_len[i] = dp_len[j]+1;
                        dp_count[i] = dp_count[j];
                    }
                    else if (dp_len[j]+1 == dp_len[i])
                        dp_count[i] += dp_count[j];
                }
            }
        }
        
        int max_length = *max_element(dp_len.begin(), dp_len.end());
        int res = 0;
        for (int i=0; i<n; i++) {
            if (dp_len[i] == max_length)
                res += dp_count[i];
        }
        
        return res;
    }
};
