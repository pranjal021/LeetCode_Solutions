class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b,a,l,o,n;
        b=a=l=o=n=0;
        
        for(auto& ch:text){
            b += (ch == 'b');
            a += (ch == 'a');
            l += (ch == 'l');
            o += (ch == 'o');
            n += (ch == 'n');
        }
        
        return min({b,a,l/2,o/2,n});
    }
};
