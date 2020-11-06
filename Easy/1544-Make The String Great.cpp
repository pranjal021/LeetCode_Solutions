class Solution {
public:
    string makeGood(string s) {
        
        stack<char> st;
        int n = s.length();
        
        for(int i=0;i<n;i++){
            
            if(st.empty()){
                
                st.push(s[i]);
                continue;
                
            }
            
            if(st.top() == s[i]+32 || st.top() == s[i]-32)
                st.pop();
            else
                st.push(s[i]);
            
        }
        
        string ans = "";
        
        if(st.size() == 0) return ans;
        
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};
