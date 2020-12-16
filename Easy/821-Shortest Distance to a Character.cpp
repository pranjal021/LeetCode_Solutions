class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        
        int n = S.size();
        vector<int> ans(n,n);
        int prev = -n;
        
        for(int i = 0 ; i < S.size() ; i++){
            
            if(S[i] == C) prev = i;
            ans[i] = (i - prev);
            
        }
        
        for(int i = prev ; i >= 0 ; i--){
            
            if(S[i] == C) prev = i;
            ans[i] = min(ans[i], prev - i);
            
        }
        
        return ans;
    }
};
