class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        int can_reach = 0;
        
        for(int i=0;i<=can_reach;i++){
            if(i == n-1){
                return true;
            }
            can_reach = max(can_reach , i+nums[i]);
        }
        
        return false;
    }
};
