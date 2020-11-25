class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        int len = 1;
        int ans = 1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1]){
                len++;
                ans = max(ans,len);
            }else{
                len=1;
            }
        }
        return ans;
    }
};
