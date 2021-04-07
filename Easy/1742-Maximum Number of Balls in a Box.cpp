class Solution {
public:

    int countBalls(int lowLimit, int highLimit) {
        
        vector<int> arr(46,0);
        
        while(lowLimit <= highLimit){
            
            int sum = 0, i = lowLimit;
            
            while(i > 0){
                sum += i % 10;
                i = i / 10;
            }
            
            arr[sum]++;
    
            lowLimit++;
        }
        
        return *max_element(arr.begin(), arr.end());
    }
};
