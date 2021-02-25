class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        
        int n = nums.size();
        int i = 0;
        int j = n-1;
        
        while(i < n && nums[i] == sorted[i]) i++;
        while(j > i && nums[j] == sorted[j]) j--;
        
        return j-i+1;
        
    }
};
