class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        set<int> s;
        
        for(auto& x:arr){
            m[x]++;
        }
        
        for(auto it = m.begin() ; it != m.end() ; it++){
            s.insert(it->second);
        }
        
        return s.size()==m.size();
    }
};
