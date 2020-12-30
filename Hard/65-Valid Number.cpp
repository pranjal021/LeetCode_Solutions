class Solution {
public:
    bool isNumber(string s) {
        bool signal = false;
        bool number = false;
        bool exp = false;
        bool decimal = false;
        
        int l = 0;
        int r = s.length()-1;
        
        while(l <=r && s[l] == ' ')l++;
        while(r >= 0 && s[r] == ' ')r--;
        
        while(l <= r){
            char ch = s[l++];
            
            if(ch == '-' || ch=='+'){
                if(signal || number) return false;
                signal = true;
            }
            else if(ch == 'e'){
                if(exp || !number) return false;
                exp = true;
                signal = false;
                number = false;
            }
            else if(ch == '.'){
                if(exp || decimal) return false;
                decimal = true;
                signal = true;
            }
            else if(ch >= '0' && ch <= '9'){
                number = true;
            }
            else{
                return false;
            }
        }
        
        return number;
    }
};
