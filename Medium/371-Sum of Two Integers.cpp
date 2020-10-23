class Solution {
public:
    int getSum(int a, int b) {
        if(b==0)return a;
        
        int s = a^b;
        int carry = (unsigned int)(a & b)<<1;
    
        return getSum(s,carry);
    }
};
