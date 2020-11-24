class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string> res(numRows);
        int row = 0;
        int increase = -1;
        
        for(int i=0;i<s.length();i++){
            
            if(i % (numRows-1) == 0) increase *= -1;
            res[row].push_back(s[i]);
            row += increase;
            
        }
        
        string ans;
        for(auto& x:res){
            ans += x;
        }
        
        return ans;
    }
};
