//Method 1:

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        int a = nums[n-1]*nums[n-2]*nums[n-3];
        int b = nums[0]*nums[1]*nums[n-1];
        
        if(a > b)
            return a;
        return b;
    }
};

//Method 2:

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int min_c = INT_MAX;
        int min_n = INT_MAX;
        int max_c = INT_MIN;
        int max_n = INT_MIN;
        int max_n_n = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            
            if(min_c > nums[i]){
                min_n = min_c;
                min_c = nums[i];
            }else if(min_n > nums[i]){
                min_n = nums[i];
            }
            
            if(max_c < nums[i]){
                max_n_n = max_n;
                max_n = max_c;
                max_c = nums[i];
            }
            else if(max_n < nums[i]){
                max_n_n = max_n;
                max_n = nums[i];
            }
            else if(max_n_n < nums[i]){
                max_n_n = nums[i];
            }
            
        }
        
        return max(min_c*min_n*max_c, max_n_n*max_n*max_c);
    }
};
