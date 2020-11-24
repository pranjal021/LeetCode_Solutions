class Solution {
public:
    bool checkRecord(string s) {
        
        int acount = 0;
        int lcount = 0;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == 'A') acount++;
            if(s[i] == 'L') lcount++;
            else lcount = 0;
            if(acount >= 2 || lcount >2) return false;
        }
        
        return true;
    }
};
