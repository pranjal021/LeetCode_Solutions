class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if(n==0) return 0;
        
        vector<int> nums(n+1,0);
        
        nums[0] = 0;
        nums[1] = 1;
        
        for(int i=1;i<=n/2;i++){
            
            if(i*2 > n || (2*i+1 > n)) break;
            
            nums[i*2] =nums[i];
            nums[(i*2)+1] = nums[i] + nums[i+1];
            
        }
        
        return *max_element(nums.begin(),nums.end());
    }
};
