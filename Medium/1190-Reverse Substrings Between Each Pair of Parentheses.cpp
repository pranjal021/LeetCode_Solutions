class Solution {
public:
    string reverseParentheses(string s) {
        
        stack<int> st;
        string res;
        
        for(int i=0;i<s.size();i++){
            
            if(s[i] == '('){
                st.push(i);
            }else if(s[i] == ')'){
                int t = st.top();
                st.pop();
                reverse(s.begin() + t + 1, s.begin() + i);
            }
            
        }   
        
        for(auto x : s){
            if(x != '(' && x != ')'){
                res.push_back(x);
            }
        }
        
        return res;
    }
};
