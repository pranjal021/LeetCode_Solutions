class Solution {
public:
    int numRabbits(vector<int>& answers) {
        
        int n = answers.size();
        
        unordered_map<int,int> m;
        
        for(auto x : answers){
            m[x]++;
        }
        
        int ans = 0;
        for(auto x : m){
            int gs = x.first+1;
            int reportees = x.second;
            int ng = (int)(ceil(reportees * 1.0 / gs * 1.0));
            ans += ng * gs;
        }
        
        return ans;
    }
};
