class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        double sum=0,count=0;
        
        int size = arr.size();
        
        for(int i = size/20 ; i<size-(size/20);i++){
            sum += arr[i];
            count++;
        }
        
        return sum/count;
    }
};
