class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       
        vector<vector<int>> res;
        int n = nums.size();
        
        if(nums.empty()) return res;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                int target2 = target - nums[i] - nums[j];
                int f = j+1;
                int e = n-1;
                while(f < e){
                    if((nums[f] + nums[e]) < target2) f++;
                    else if((nums[f] + nums[e]) > target2) e--;
                    else{
                        vector<int> q(4,0);
                        q[0] = nums[i];
                        q[1] = nums[j];
                        q[2] = nums[f];
                        q[3] = nums[e];
                        res.push_back(q);
                        
                        while(f < e && nums[f] == q[2]) ++f;
                        while(f < e && nums[e] == q[3]) --e;
                    }
                }
                
                while(j+1 < n && nums[j+1] == nums[j]) ++j;
            }
            
            while(i+1< n && nums[i+1] == nums[i]) ++i;
        }
        
        return res;
    }
};
