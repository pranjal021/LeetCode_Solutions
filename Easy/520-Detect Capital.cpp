class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int ucount = 0;
        int lcount = 0;
        bool flag = false;
        
        for(int i=0;i<word.length();i++){
            if(isupper(word[0])) flag = true;
            if(isupper(word[i])) ucount++;
            else if(islower(word[i])) lcount++;
        }
        
        int n = word.length();
        
        return ucount==n || lcount==n || (flag && lcount==n-1);
        
    }
};
