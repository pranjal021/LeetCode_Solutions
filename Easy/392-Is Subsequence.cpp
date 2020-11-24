class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        if(s.length() == 0) return true;
        
        int n = s.length();
        int m = t.length();
        
        int j=0;
        
        for(int i=0;i<m;i++){
            
            if(t[i] == s[j]){
                
                j++;
                
                if(j == n) return true;
                
            }
            
        }
        
        return false;
    }
};
