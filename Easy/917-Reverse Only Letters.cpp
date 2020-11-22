class Solution {
public:
    string reverseOnlyLetters(string S) {
        
        int i=0;
        int j=S.length()-1;
        
        while(i<j){
            
            if(isalpha(S[i]) && isalpha(S[j])){
                swap(S[i++],S[j--]);
            }
            else if(!isalpha(S[i]) && !isalpha(S[j])){
                i++;
                j--;
            }else if(!isalpha(S[i]))
                i++;
            else
                j--;
            
        }
        
        return S;
    }
};
