class Solution {
public:
    int longestValidParentheses(string s) {
        
        int len = 0;
        
        stack<int> in;
        in.push(-1);
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                ch.push('(');
                in.push(i);
            }
            else{
                if(!ch.empty() && ch.top() == '('){
                    ch.pop();
                    in.pop();
                    len = max(len, i - in.top());
                }else{
                    in.push(i);
                }
            }
        }
        
        return len;
    }
};
