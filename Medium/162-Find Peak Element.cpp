class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        
        //if there is only one element in an array
        if(nums.size()==1)return 0;
        
        //peak is at first
        if(nums[0] > nums[1]) return 0;
        
        //peak is at last element
        if(nums.back() > nums[nums.size()-2]) return nums.size()-1;
        
        //iterate to find peak
        for(int i=0;i<n;i++){
            if((nums[i] > nums[max(0,i-1)]) && (nums[i] > nums[i+1])) return i;
        }
        
        return -1;
    }
};
