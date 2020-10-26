class Solution {
public:
    int divide(int dividend, int divisor) {
        int sign = (dividend<0 ^ divisor<0)? -1:1;
        
        long ldividend = labs(dividend);
        long ldivisor = labs(divisor);
        
        long ans = exp(log(ldividend)-log(ldivisor));
        
        if(ans>INT_MAX){
            return sign==1 ? INT_MAX:INT_MIN;
        }
        return sign*(int)ans;
    }
};
