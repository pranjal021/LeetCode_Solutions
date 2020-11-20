class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        
        while(s <= e){
            
            while(s+1 <= e and nums[s] == nums[s+1]) s++;
            while(e-1 >= 0 and nums[e] == nums[e-1]) e--;
            
            int mid = (s+e)/2;
            
            if(target == nums[mid]) return true;
            
            else if(nums[mid] <= nums[e]){
                
                if(target > nums[mid] && target <= nums[e])
                    s = mid+1;
                else
                    e = mid-1;
                
            }
            
            else if(nums[mid] >= nums[s]){
                
                if(target >= nums[s] and target < nums[mid])
                    e = mid-1;
                else
                    s = mid+1;
                
            }
            
        }
        
        return false;
    }
};
