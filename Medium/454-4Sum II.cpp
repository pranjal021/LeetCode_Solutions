class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        
        unordered_map<int,int> m;
        int count = 0;
        
        for(auto a:A){
            for(auto b:B)
                m[a+b]++;
        }
        
        for(auto c:C){
            for(auto d:D){
                auto it = m.find(0 - c - d);
                if(it != m.end()) count += it->second;
            }
        }
        
        return count;
    }
};
