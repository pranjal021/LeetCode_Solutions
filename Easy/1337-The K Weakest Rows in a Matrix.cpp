class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        multimap<int,int> m;
        
        for(int i=0;i<mat.size();i++){
            int c = count(mat[i].begin(),mat[i].end(),1);
            m.insert(pair<int,int>(c,i));
        }
        
        vector<int> ans;
        for(auto i=m.begin();i!=m.end()&&k-->0;i++){
            ans.push_back((int)i->second);
        }
        return ans;
    }
};
