class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        
        if(nums[s] <= nums[e]){
            return nums[s];
        }
        
        while(s <= e){
            int m = (s+e)/2;
            
            if(nums[m] > nums[m+1]){
                return nums[m+1];
            }else if(nums[m] < nums[m-1]){
                return nums[m];
            }else if(nums[s] <= nums[m]){
                s = m +1;
            }else if(nums[m] <= nums[e]){
                e = m -1;
            }
        }
        
        return -1;
    }
};
