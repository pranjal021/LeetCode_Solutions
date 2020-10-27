class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,n=nums.size();
        
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-2;i++){
            
            if(i>0){
                while(i<n && nums[i]==nums[i-1])
                    i++;
            }
            
            int l = i+1;
            int r = n-1;
            while(l<r){
                
                if(nums[i] + nums[l] + nums[r] < 0)
                    l++;
                else if(nums[i] + nums[l] + nums[r] > 0)
                    r--;
                else{
                    vector<int> v(3);
                    v[0] = nums[i];
                    v[1] = nums[l];
                    v[2] = nums[r];
                    
                    if(ans.size()==0)
                        ans.push_back(v);
                    else if(ans[ans.size()-1] != v){
                        ans.push_back(v);
                    }
                    l++;
                    r--;
                }
            }
        }
        
        return ans;
        
    }
};
