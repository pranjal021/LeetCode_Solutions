class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0,newsum=0;
        
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        
        sort(nums.begin(),nums.end(),std::greater<>());
        
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            newsum += nums[i];
            sum -= nums[i];
            ans.push_back(nums[i]);
            if(newsum > sum){
                break;
            }
        }
        
        return ans;
    }
};
