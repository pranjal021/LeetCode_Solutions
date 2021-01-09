class Solution {
private:
    int value(char ch){
        if(ch == 'I')return 1;
        if(ch == 'V')return 5;
        if(ch == 'X')return 10;
        if(ch == 'L')return 50;
        if(ch == 'C')return 100;
        if(ch == 'D')return 500;
        if(ch == 'M')return 1000;
        return -1;
    } 

public:
    int romanToInt(string s) {
        
        int ans = 0;
        for(int i=0;i<s.size();i++){
            int v1 = value(s[i]);
            if(i+1 < s.size()){
                int v2 = value(s[i+1]);
                if(v2 > v1){
                    ans += v2-v1;
                    i++;
                }else{
                    ans += v1;
                }
            }else{
                ans += v1;
            }
        }
        
        return ans;
    }
};
