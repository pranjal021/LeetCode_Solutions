class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res =0,max=0;
        for(int i=1;i<prices.size();i++){
            res += prices[i]-prices[i-1];
            if(res < 0) res = 0;
            if(res > max) max = res;
        }
        return max;
    }
};
