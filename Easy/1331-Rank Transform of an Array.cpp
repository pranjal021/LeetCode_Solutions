class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> a(arr);
        sort(a.begin(),a.end());
        
        unordered_map<int,int> m;
        
        for(auto& x: a){
            m.emplace(x, m.size()+1);
        }
        
        for(int i=0;i<a.size();i++){
            a[i] = m[arr[i]];
        }
        
        return a;
    }
};
