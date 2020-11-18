//Method 1: using stack 

class Solution {
public:
    string removeOuterParentheses(string S) {
        int start = 0, end = 0;
        
        stack<char> st;
        
        string ans;
        
        for(int i=0;i<S.length();i++){
            
            if(S[i] == ')') 
                end++;
            else 
                start++;
            
            st.push(S[i]);
            
            if(start ==  end){
                string out = "";
                st.pop();
                int size = st.size();
                start = 0;
                end = 0;
                while(size!=1){
                    out = st.top() + out;
                    st.pop();
                    size--;
                }
                st.pop();
                ans = ans + out;
            }
            
        }
        return ans;
    }
};

//Method 2:

class Solution {
public:
    string removeOuterParentheses(string S) {
        std::string r;
        int count = 0;
        for(auto c:S){
            if(c == '(' && count++>0) r += c;
            if(c == ')' && count-->1) r += c;
        }
        return r;
    }
};
