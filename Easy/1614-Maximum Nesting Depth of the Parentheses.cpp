class Solution {
public:
    int maxDepth(string s) {
        
        int currAns = 0;
        int finalAns = 0;
        int n = s.length();
        
        for(int i=0;i<n;i++){
            
            char ch = s[i];
            
            if(ch == '(') currAns++;
            
            else if(ch == ')') currAns--;
            
            else continue;
            
            finalAns = max(currAns,finalAns);
        }
        
        return finalAns;
    }
};
