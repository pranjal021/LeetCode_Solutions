class Solution {
public:
    
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a') || (c == 'e') ||(c == 'i') ||(c == 'o') ||(c == 'u');
    }
    
    string reverseVowels(string s) {
        
        int b = 0;
        int e = s.length()-1;
        
        while(b<e){
            
            while(b<s.length() && !isVowel(s[b])){
                b++;
            }
            
            while(e && !isVowel(s[e])){
                e--;
            }
            
            if(b<e){
                swap(s[b++],s[e--]);
            }
            
        }
        
        return s;
        
    }
};
