class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        
        unordered_set<int> s;
        
        for(int i = 1 ; i <= bound ; i *= x){
            for(int j = 1 ; i+j <= bound ; j *= y){
                s.insert(i+j);
                if(y == 1) break;
            }
            if(x == 1) break;
        }
        
        return vector<int> (s.begin(), s.end());
    }
};
