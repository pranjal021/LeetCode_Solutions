class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        int d = num;
        string s = "";
        num = abs(num);
        
        while(num){
            int rem = num%7;
            num = num/7;
            s += to_string(rem);
        }
        
        if(d < 0) s+= "-";
        
        reverse(s.begin(),s.end());
        return s;
    }
};
