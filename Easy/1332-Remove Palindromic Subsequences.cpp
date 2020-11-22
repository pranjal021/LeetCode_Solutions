class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.length() == 0)
            return 0;
        else if(ispalindrome(s))
            return 1;
        return 2;
    }
    
    bool ispalindrome(string s){
        for(int i=0,j=s.length()-1;i<j;i++,j--){
            if(s[i] != s[j]){
                return false;
            }
        }
        return true;
    }
    
};
