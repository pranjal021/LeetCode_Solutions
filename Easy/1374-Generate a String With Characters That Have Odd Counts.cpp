class Solution {
public:
    string generateTheString(int n) {
        
        string ans;
        
        if(n%2 != 0){
            // n is odd
            for(int i=0;i<n;i++) ans += 'a';
            
        }else{
            //n is even
            for(int i=0;i<n-1;i++) ans += 'a';
            ans += 'b';
        }
        
        return ans;
    }
};
