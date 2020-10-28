class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> v;
        
        if(nums.size()==0){
            return v;
        }
        
        int start = nums[0];
        int end = nums[0];
        
        for(int i=1;i<nums.size();i++){
            
            if(end+1 == nums[i]){
                end = nums[i];
            }else{
                if(start == end){
                    string x = to_string(start);
                    v.push_back(x);
                }else{
                    string x = to_string(start);
                    x += "->";
                    x += to_string(end);
                    v.push_back(x);
                }
                start = nums[i];
                end = nums[i];
            }
            
        }
        
        if(start == end){
            string x = to_string(start);
            v.push_back(x);
        }else{
            string x = to_string(start);
            x += "->";
            x += to_string(end);
            v.push_back(x);
        }
        
        return v;
        
    }
};
