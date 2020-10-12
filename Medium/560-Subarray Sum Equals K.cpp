
//Problem 560: Subarray Sum Equals K (Medium)

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count =0;
        int pre=0;
        
        unordered_map<int,int> m;
        m[0]=1;
        
        for(int i=0;i<nums.size();i++){
            pre += nums[i];
            int rem = pre-k;
            if(m.count(rem)){
                count+= m[rem];
            }
            m[pre]++;
        }
        return count;
    }
};