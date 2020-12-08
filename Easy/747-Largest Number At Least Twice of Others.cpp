class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int index = -1;
        int n = nums.size();
        int maxVal = INT_MIN;
        
        if(n == 1) return 0;
        
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maxVal){
                maxVal = nums[i];
                index = i;
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            
            if(i != index){
                if(nums[i] * 2 > maxVal){
                    return -1;
                }
            }
            
        }
        return index;
    }
};
