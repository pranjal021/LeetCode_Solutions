class Solution {
public:
    
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E'|| ch=='I'|| ch=='O' || ch== 'U')
            return true;
        
        return false;
    }
    
    bool halvesAreAlike(string s) {
        
        int n = s.size();
        string a = s.substr(0,n/2); //first half
        string b = s.substr(n/2); //second half
        
        int v1=0, v2=0;
        int i = 0;
        
        while(i < n/2){
            if(isVowel(a[i])) v1++;
            if(isVowel(b[i])) v2++;
            i++;
        }
        
        return v1 == v2;
    }
};
