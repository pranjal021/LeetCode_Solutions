class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        int z = x^y;
        for(int i=0;i<32;i++){
            
            if(z&1){
                ans++;
            }
            
            z = z>>1;
        }
        
        return ans;
    }
};
