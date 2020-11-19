class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]!=']'){
                
                st.push(s[i]);
                
            }else{
                
                string word = "";
                
                while(st.top() != '['){
                    word = st.top() + word;
                    st.pop();
                }
                
                st.pop(); //for '['
                
                string number = "";
                
                while(!st.empty() && isdigit(st.top())){
                    number = st.top() + number;
                    st.pop();
                }
                
                int num = stoi(number);
                
                while(num--){
                    for(int p=0;p<word.length();p++){
                        st.push(word[p]);
                    }
                }
                
            }
        }
        
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        
        return s;
    }
};
