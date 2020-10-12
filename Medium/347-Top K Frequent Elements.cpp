class Solution {
public:
    
    bool static myComp(pair<int,int> &a,pair<int,int>&b){
        return a.second>b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        unordered_map<int,int> m;
        vector<pair<int,int>> v;
        
        for(auto x:nums){
            m[x]++;
        }
        
        for(auto x:m){
            v.push_back({x.first,x.second});
        }
        
        sort(v.begin(),v.end(),myComp);
        
        if(k>m.size())return ans;
        
        for(int i=0;i<k;i++){
            ans.emplace_back(v[i].first);
        }
        
        return ans;
    }
};