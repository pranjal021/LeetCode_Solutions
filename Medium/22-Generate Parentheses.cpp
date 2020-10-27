class Solution {
public:
    vector<string> ans;
    
    void helper(string s,int open,int close){
        if(open==0 && close==0){
            ans.push_back(s);
            return;
        }
        
        if(open>0)
            helper(s+"(",open-1,close);
        if(open<close)
            helper(s+")",open,close-1);
    }
    
    vector<string> generateParenthesis(int n) {
        ans.clear();
        helper("",n,n);
        return ans;
    }
};
