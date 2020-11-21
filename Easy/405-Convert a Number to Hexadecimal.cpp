class Solution {
public:
    string toHex(int num) {
        
        if(num == 0) return "0";
        
        long int n = num;
        string ans = "";
        
        if(num < 0){
            n = pow(2,32)-abs(n);
        }
        
        while(n > 0){
            
            long int temp = (n%16);
            
            if(temp <= 9){
                 ans = to_string(temp) +  ans;
            }else{
                ans = char(temp+87) + ans;
            }
            
            n = n/16;
        }
        return ans;
    }
};
