class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        int first = 0;
        int sum = nums[0]+nums[1]+nums[2];
        
        while(first < nums.size()-2){
            
            int s = first+1;
            int e = nums.size()-1;
            
            while(s < e){
                int curr = nums[first] + nums[s] + nums[e];
                if( abs(target-sum) > abs(target-curr)) sum = curr;
                if(curr > target) e--;
                else if(curr < target) s++;
                else return target;
            }
            
            first++;
            
        }
        
        return sum;
    }
};
