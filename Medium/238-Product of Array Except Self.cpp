class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> lhs(nums.size(), 1);
        int rhs = 1;
        for(int i = 1; i<nums.size() ; i++){
            lhs[i] = lhs[i-1] * nums[i-1];
        }
        for(int i = lhs.size()-1; i >= 1 ; i--){
            rhs *= nums[i];
            lhs[i-1] *= rhs;
        }
        return lhs;
    }
};