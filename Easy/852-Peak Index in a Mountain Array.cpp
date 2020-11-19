class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        return distance(arr.begin(),max_element(arr.begin(),arr.end()));
        
    }
};
