class Solution {
public:
    void sortColors(vector<int>& nums) {
        int p0 = 0; //tracking the position of '0'
        int p1 = 0; //for tracking the position of '1'
        int p2 = nums.size()-1; //for tracking the position of '2'
        
        while(p1<=p2){
            
            if(nums[p1]==1){
                
                p1++;
                
            }else if(nums[p1]==0){
                
                swap(nums[p0++],nums[p1++]);
                
            }else if(nums[p1]==2){
                
                swap(nums[p1],nums[p2]);
                p2--;
                
            }
        }
        
        return;
    }
};