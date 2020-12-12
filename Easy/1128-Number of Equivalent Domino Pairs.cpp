class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        
        int ans = 0;
        map<int,int> m;
        
        for(auto& d: dominoes){
            
            auto val = min(d[0], d[1]) * 10 + max(d[0], d[1]);
            ans += m[val];
            m[val]++;
            
        }
        
        return ans;
    }
};
