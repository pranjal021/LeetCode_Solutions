#define mod 1000000007
class Solution {
public:
    
    string getBinary(int n){
        
        string a= "";
        
        for(int i=n;i>=1;i--){
            int no = i;
            while(no){
                a += (no%2)+'0';
                no = no/2;
            }
        }
        
        return a;
    }
    
    int getValue(string a){
        
        long long int ans = 0;
        int p = 1;
        
        for(int i=0; i < a.size(); i++){
            
            long long now = (a[i]-'0')*p;
            p *= 2;
            p %= mod;
            ans += now;
        }
        return ans%mod;
    }
    
    int concatenatedBinary(int n) {
        
        string ans = getBinary(n);
        return getValue(ans);
        
    }
};
