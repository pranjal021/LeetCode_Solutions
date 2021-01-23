//for better insight, dry run by plotting graph for the given test case.
//Y-axis : price of the stock 
//X-axis : days (0.....length of array prices)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = prices[0];
        int sell = prices[0];
        int profit = 0;
        
        for(int i = 1 ; i < prices.size() ; i++){
            
            if(prices[i] > prices[i-1]){
                sell = prices[i];
            }else{
                profit += sell - buy;
                buy = sell = prices[i];
            }
            
        }
        
        profit += sell - buy;
        
        return profit;
    }
};
