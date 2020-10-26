class Solution {
public:
    
    vector<string> keyboard = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", 
                                     "tuv", "wxyz"};
    
    vector<string> ans;
    
    void helper(string digits,string out,int i){
        
        if(i == digits.size()){
            ans.push_back(out);
            return;
        }
        
       for(int j=0;j<keyboard[digits[i]-'0'].size();j++){
           helper(digits,out+keyboard[digits[i]-'0'][j],i+1);
       }
        
    }
    
    vector<string> letterCombinations(string digits) {
       
        if(digits.size() == 0)return ans;
        helper(digits,"",0);
        return ans;
    }
};
