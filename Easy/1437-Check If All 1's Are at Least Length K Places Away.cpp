class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        int t = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            
            if(nums[i] == 1){
                if(i == 0){
                    continue;
                }else{
                    if(t < k) return false;
                    t = 0;
                }
            }else{
                t++;
            }
            
        }
        return true;
    }
};
