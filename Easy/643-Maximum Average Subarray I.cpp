class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avgsum;
        for(int i=0;i<k;i++){
            avgsum += nums[i];
        }
        
        avgsum /= k;
        double result = avgsum;
        
        for(int i=k;i<nums.size();i++){
            int prev = nums[i-k];
            int next = nums[i];
            avgsum += double(next-prev)/k;
            result = max(result,avgsum);
        }
        return result;
    }
};
