class Solution {
public:
    int arrangeCoins(int n) {
        
        int k = 1,ans = 0;
        
        while(n >= 0){
            if(n >= k) n = n-k;
            else break;
            ans++; k++;
        }
        
        return ans;
    }
};
