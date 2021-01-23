//where 
//obsp : old bought state profit
//nbsp : new bought state profit
//ossp : old sell state profit
//nssp : new sell state profit

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        int obsp = -prices[0];
        int ossp = 0;
        
        for(int i=1;i<prices.size();i++){
            
            int nbsp, nssp;
            
            if(ossp - prices[i] > obsp){
                nbsp = ossp - prices[i];
            }else{
                nbsp = obsp;
            }
            
            if(prices[i] + obsp - fee > ossp){
                nssp = prices[i] + obsp - fee;
            }else{
                nssp = ossp;
            }
            
            obsp = nbsp;
            ossp = nssp;
        }
        
        return ossp;
    }
};
