class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int result = 0;
        vector<int> sum;
        int curr_sum = 0;
        
        for(int i=0;i<arr.size();i++){
            curr_sum += arr[i];
            sum.emplace_back(curr_sum);
        }
        
        for(int left=0;left<arr.size();left++){
            result += arr[left];
            int right = left+2;
            while(right < arr.size()){
                result += sum[right] - (left>=1 ? sum[left-1] : 0);
                right += 2;
            }
        }
        return result;
        
    }
};
