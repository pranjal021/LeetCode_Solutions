class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        int ans = -1;
        int n = nums.size();
        
        for(int i=0;i<=n;i++){
            
            int count = 0;
            int x = i;
            
            for(int j=0;j<n;j++)
                if(nums[j] >= x)count++;
            
            if(count == x){
                ans = x;
                break;
            }
            
        }
        
        return ans;
    }
};
