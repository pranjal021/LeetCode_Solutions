class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int ans = 0;
        int prefix_sum = 0;
        unordered_map<int,int> m;
        m[0] = -1; // will mark it as base case
        
        for(int i =0;i<nums.size();i++){
            if(nums[i] == 0){
                prefix_sum += -1;
            }else{
                prefix_sum += 1;
            }
            
            if(m.count(prefix_sum)){
                int len = i - m[prefix_sum];
                if(len > ans){
                    ans = len;
                }
            }else{
                m[prefix_sum] = i;
            }
            
        }
        
        return ans;
    }
};

//for detailed solution visit : https://leetcode.com/problems/contiguous-array/discuss/1214307/c%2B%2B-code-with-explanation
