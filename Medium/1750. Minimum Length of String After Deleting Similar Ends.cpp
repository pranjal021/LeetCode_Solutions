class Solution {
public:
    int minimumLength(string s) {
        
        int n = s.size();
        int i = 0; 
        int j = n-1;
        
        if(s[i] != s[j]) return n;
        
        while(i < j){
            
            if(s[i] != s[j]) break;
            
            while(i < j && s[i] == s[i+1]) i++;
            
            while(i < j &&  s[j] == s[i]) j--;
            
            i++;
        }
        
        return j - i + 1;
    }
};
