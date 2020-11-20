class Solution {
public:
    
    vector<int> p = {2,3,5};
    
    bool isUgly(int num) {
        if(num < 1) return false;
        
        for(auto& x:p){
            while(num%x == 0) num /=x;
        }
        return num == 1;
    }
};
