class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        int sum = 0;
        vector<int> arr(101);
    
        for(auto x : nums) arr[x]++;
        
        
        for(int i=0;i<arr.size();i++)
        {
            
            if(arr[i] == 1) sum += i;
            
        }
        
        return sum;
    }
};
