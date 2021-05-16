class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        int j = -1;
        int ans = 0;
        int ct = 0;
        
        for(int i=0;i<n;i++){
            if(nums[i] == 0) ct++;
            
            while(ct > k){
                j++;
                if(nums[j] == 0){
                    ct--;
                }
            }
            
            int len = i - j;
            if(len > ans){
                ans = len;
            }
        }
        
        return ans;
    }
};
