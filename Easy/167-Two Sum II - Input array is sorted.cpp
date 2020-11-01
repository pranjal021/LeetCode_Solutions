class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int s = 0;
        int e = n-1;
        vector<int> v;
        
        
        while(s<e){
            if((numbers[s] + numbers[e]) == target){
                v.push_back(s+1);
                v.push_back(e+1);
                break;
            }else if((numbers[s] + numbers[e]) > target){
                e--;
            }else{
                s++;
            }
        }
        
        return v;
    }
};
