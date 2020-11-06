class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0;
        int j = n;
        while(i<n && j<2*n){
            ans.emplace_back(nums[i]);
            ans.emplace_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};
