class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n = arr.size();
        if(n < 3) return false;
        
        int i=0;
        int j=n-1;
        
        while(i<n-1 && arr[i] < arr[i+1]) i++;
        
        while(j>0 && arr[j] < arr[j-1]) j--;
        
        return i!=0 && j!=n-1 && i==j;
    }
};
