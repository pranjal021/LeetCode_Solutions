class Solution {
public:
    
    static bool myComp(pair<int,int> &a,pair<int,int> &b){
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    }
    
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> count;
        unordered_map<int,int> m;
        
        for(int x:nums){
            m[x]++;
        }
        
        for(auto &val:m){
            count.push_back({val.second,val.first});
        }
        
        sort(count.begin(),count.end(),myComp);
        
        vector<int> result;
        
        for(int i=0;i<count.size();i++){
            while(count[i].first>0){
                result.push_back(count[i].second);
                count[i].first--;
            }
        }
        
        return result;
    }
};
