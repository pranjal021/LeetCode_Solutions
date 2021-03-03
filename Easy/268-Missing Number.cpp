class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        
        for(int i=1;i<=n;i++){
            ans ^= i;
        }
        
        for(auto x : nums){
            ans ^= x;
        }
        
        return ans;
    }
};
