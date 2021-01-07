class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v(2,0);
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            int x = target-nums[i];
            if(m.count(x)){
                v[0] = i;
                v[1] = m[x];
            }else{
                m[nums[i]] = i;
            }
        }
        
        return v;
    }
};
