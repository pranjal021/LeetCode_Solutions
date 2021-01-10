class Solution {
public:
    int totalMoney(int n) {
        
        int ans = 0;
        int startPoint = 1;
        
        while(n>0){
            
            int i=0;
            while(i < 7){
                ans += startPoint + i;
                i++;
                n--;
                if(n==0) break;
            }
            
            startPoint++;
        }
        
        return ans;
    }
};
