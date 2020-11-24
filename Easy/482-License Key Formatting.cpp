class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        
        stack<char> s;
        int cur = 0;
        string ans;
        
        for(auto ch:S){
            if(ch != '-')
                s.push(ch);
        }
        
        while(!s.empty()){
            
            ans += toupper(s.top());
            s.pop();
            cur++;
            
            if(cur == K && !s.empty()){
                ans += '-';
                cur = 0;
            }
            
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
