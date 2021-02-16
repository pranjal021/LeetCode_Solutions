class Solution {
public:
    
    void dfs(string s,int idx,vector<string> &v){
        
        v.push_back(s);
        
        if(idx >= s.size()) return;
        
        for(int i = idx; i < s.size(); i++){
            
            if(isalpha(s[i])){
                s[i] ^= 32;
                dfs(s,i+1,v);
                s[i] ^= 32;
            }
           
        }
    }
    
    vector<string> letterCasePermutation(string S) {
        
        vector<string> res;
        dfs(S,0,res);
        return res;
    }
};
