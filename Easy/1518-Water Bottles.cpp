class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        return numBottles < numExchange ? numBottles : numExchange + numWaterBottles(numBottles - numExchange + 1, numExchange);
        
    }
    
};
