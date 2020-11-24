class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minNo = nums[0];
        int count = 0;
        
        for(auto i:nums) minNo = min(minNo,i);
        for(auto x:nums) count += x-minNo;
        
        return count;
    }
};
