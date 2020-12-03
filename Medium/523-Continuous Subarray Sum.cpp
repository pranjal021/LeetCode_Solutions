class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        if(nums.size() < 2) return false;
        
        if(k==0){
            
            for(int i=1;i<nums.size();i++){
                if(nums[i] == 0 && nums[i-1] == 0) return true;
            }
            return false;
        }else{
            
            int i = 0;
            map<int,int> m;
            
            while(true){
                
                if(i != 0 && nums[i] % k == 0){
                    return true;
                }else{
                    
                    if(m.find(nums[i] % k) == m.end()){
                        m[nums[i] % k] = i;
                    }else{
                        if(i - m[nums[i] % k] > 1) return true;
                    }
                    i++;
                    if(i == nums.size()) return false;
                    nums[i] += nums[i-1];
                    
                }
                
            }
            
            
        }
        
    }
};
