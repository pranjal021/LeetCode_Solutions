class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> m;
        
        for(auto n:deck){
            m[n]++;
        }
        
        int x = INT_MAX;
        for(auto val:m){
            if(val.second < x)
                x = val.second;
        }
        
        if(x < 2) return false;
        
        for(int i=2;i<=x;i++){
            
            bool good = true;
            
            for(auto& p:m){
                if(p.second % i != 0){
                    good = false;
                    break;
                }
            }
            
            if(good) return true;
        }
        
        return false;
    }
};
