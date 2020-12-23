class Solution {
public:
    
    bool nextpermutation(string& nums){
        int i = nums.size()-1;
        while(i > 0 && nums[i-1] >= nums[i]) i--;
        if(i==0) return false;
        
        int j = nums.size()-1;
        while (j > 0 && nums[j] <= nums[i-1]) j--;
        swap(nums[j], nums[i-1]);
        reverse(nums.begin()+i, nums.end());
        return true;
    }
    
    int nextGreaterElement(int n) {
        
        string num = to_string(n);
        bool res = nextpermutation(num);
        size_t ans = stoll(num);
        return(!res || ans > INT_MAX) ? -1: ans;
        
    }
};
