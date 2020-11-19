class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> st;
        string ans = "";
        
        for(int i=0 ; i<S.length() ; i++){
            if(st.empty()){
                st.push(S[i]);
                continue;
            }
            
            if(st.top() == S[i]){
                st.pop();
            }else{
                st.push(S[i]);
            }
        }
        
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
