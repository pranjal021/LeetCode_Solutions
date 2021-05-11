class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n,0);
        
        stack<int> s;
        for(int i=n-2;i>=0;i--){
            while(s.size() > 0 && s.top() <= nums[i]) s.pop();
            s.push(nums[i]);
        }
        
        for(int i=n-1;i>=0;i--){
            while(s.size() > 0 && s.top() <= nums[i]) s.pop();
            ans[i] = s.size() > 0 ? s.top() : -1; 
            s.push(nums[i]);
        }
        
        return ans;
    }
};
