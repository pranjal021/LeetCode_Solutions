class Solution {
public:
    string convertToTitle(int n) {
        
        string ans = "";
        
        while(n){
            
            int rem = n%26;
            
            if(rem == 0){
                
                ans += 'Z';
                n = (n/26) - 1;
                
            }else{
                
                ans += (rem -1) + 'A';
                n = n/26;
                
            }
            
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};
