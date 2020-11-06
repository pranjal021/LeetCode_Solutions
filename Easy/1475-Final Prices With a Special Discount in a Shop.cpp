class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int n = prices.size();
        
        for(int i=0;i<n;i++){
            
            int curr_price = prices[i];
            int discount = 0;
            
            for(int j=i+1;j<n;j++){
                
                if(prices[j] <= curr_price){
                    discount = prices[j];
                    break;
                }
                
            }
            
            prices[i] = curr_price-discount;
        }
        
        return prices;
    }
};
