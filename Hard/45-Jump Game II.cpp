class Solution {
public:
    int jump(vector<int>& nums) {
        int curReach = 0;
        int jumps = 0;
        int maxReach = 0;
        
        for(int i=0;i<nums.size()-1;i++){
            if(i+nums[i] > maxReach){
                maxReach = i + nums[i];
            }
            
            if(i == curReach){
                jumps++;
                curReach = maxReach;
            }
        }
        
        return jumps;
    }
};
