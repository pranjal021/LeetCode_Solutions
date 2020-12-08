class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        int index = -1;
        if(n == 0) return -1;
        
        for(int i=0;i<n;i++) sum += nums[i];
        
        int lsum = 0;
        int rsum = 0;
        
        if(lsum == (sum-nums[0])) return 0;
        
        
        for(int i=1;i<n;i++){
            
            lsum += nums[i-1];
            rsum = sum - lsum - nums[i];
            if(lsum == rsum){
                index = i;
                break;
            }
            
        }
        
        return index;
    }
};
