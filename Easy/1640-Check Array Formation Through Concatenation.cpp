class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        int n = arr.size();
        unordered_map<int,vector<int>> m;
        for(auto &piece:pieces){
            m[piece[0]] = piece;
        }
        
        int idx = 0;
        
        while(idx<n){
            int val = arr[idx];
            if(!m.count(val)){
                return false;
            }
            
            for(auto &piece_val:m[val]){
                if(idx == n) return false;
                if(piece_val != arr[idx++]) return false;
            }
        }
        
        return idx == n;
    }
};
