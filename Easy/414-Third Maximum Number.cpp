class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int, greater<int>> s(nums.begin(),nums.end());
        
        if(s.size() < 3) 
            return *s.begin();
        return *next(begin(s),2);
    }
};
