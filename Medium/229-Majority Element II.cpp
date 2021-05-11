class Solution {
public:
    
    bool hasSum(int v, vector<int> &nums){
        int c = 0;
        
        for(auto x : nums){
            if(x == v){
                c++;
            }
        }
        
        return c > nums.size()/3;
    }
    
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        
        int v1 = nums[0];
        int c1 = 1;
        int v2 = nums[0];
        int c2 = 0;
        
        int i = 1;
        while(i < n){
            
            if(nums[i] == v1){
                c1++;
            }else if(nums[i] == v2){
                c2++;
            }else{
                if(c1 == 0){
                    v1 = nums[i];
                    c1 = 1;
                }else if(c2 == 0){
                    v2 = nums[i];
                    c2 = 1;
                }else{
                    c1--;
                    c2--;
                }
            }
            
            i++;
        }
        
        vector<int> ans;
        
        if(hasSum(v1, nums)) ans.push_back(v1);
        
        if(v1 != v2 && hasSum(v2, nums)) ans.push_back(v2);
        
        return ans;
    }
};
