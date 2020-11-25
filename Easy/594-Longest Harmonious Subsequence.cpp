class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        
        int ans = 0;
        
        for(auto& x:nums){
            m[x]++;
            
            if(m.count(x+1))
                ans = max(ans,m[x] + m[x+1]);
            
            if(m.count(x-1))
                ans = max(ans,m[x] + m[x-1]);
        }
        
        return ans;
    }
};
