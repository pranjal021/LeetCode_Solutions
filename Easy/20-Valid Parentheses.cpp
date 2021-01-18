class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            
            char ch = s[i];
            
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }else{
                
                if(st.empty()) return false;
                
                char c = st.top();
                switch(ch){
                    case ')': if(c != '('){
                                    return false;
                                }else{
                                    st.pop();
                                }
                                break;
                    case '}': if(c != '{'){
                                    return false;
                                }else{
                                    st.pop();
                                }
                                    break;
                        
                    case ']': if(c != '['){
                                    return false;
                                }else{
                                    st.pop();
                                }
                                    break;
                }
            }
            
        }
        
        return st.empty();
    }
};
