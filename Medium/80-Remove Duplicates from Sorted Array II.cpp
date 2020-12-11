//Method 1:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i = 0;
        for(int n:nums){
            if(i<2 || n > nums[i-2]){
                nums[i++] = n;
            }
        }
        
        return i;
    }
};

//Method 2:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        
        for(int i=2;i<n;i++){
            if(nums[i] == nums[i-2-count]) count++;
            else nums[i-count] = nums[i];
        }
        
        return n-count;
    }
};
