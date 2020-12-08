class Solution {
public:
    
    int getSetBits(int n){
        int ans = 0;
        while(n){
            ans += (n%2 == 0 ? 0:1);
            n = n/2;
        }
        return ans;
    }
    
    int countPrimeSetBits(int L, int R) {
        
        set<int> prime{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
        int count = 0;
        for(int i=L;i<=R;i++){
            int bits = getSetBits(i);
            count += prime.count(bits);
        }
        
        return count;
    }
};
