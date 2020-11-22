class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        if(num < 0 || num == 1) return false;
        
        int x = 1;
        int i =2;
        
        for( ; i<sqrt(num) ; i++){
            
            if(num%i == 0) x += i + num/i;
        
        }
        
        if((int(sqrt(num)) >= i) && (num%i == 0)) x += i;
        
        return x == num;
    }
};
