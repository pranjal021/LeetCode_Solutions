class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n = s.length();
        int l = t.length();
        
        if(n != l) return false;
        
        unordered_map<char,char> m;
        unordered_map<char,char> v;

        
        for(int i=0;i<n;i++){
            char ch = s[i];
            
            if(!m.count(ch)){
                m[s[i]] = t[i];
            }
            if(!v.count(t[i])){
                v[t[i]] = s[i];
            }
            if((m[s[i]] != t[i]) || (v[t[i]] != s[i]) ){
                    return false;
            }
            
        }
        
        return true;
    }
};

