class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
        int count = 0;
        int n = nums.size();
        
        for(int i=1;i<n;i++){
            if(nums[i-1] > nums[i]){
                count++;
                if(i-2<0 || nums[i-2] <= nums[i]) nums[i-1] = nums[i];
                else nums[i] = nums[i-1];
            }
        }
        
        return count<=1;
    }
};
