class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int> rmin(n+1);

        rmin[n] = INT_MAX; 
        
        for(int i=n-1;i>=0;i--){
            rmin[i] = min(rmin[i+1], arr[i]);
        }
        
        int lmax = INT_MIN;
        int chunks = 0;
        
        for(int i=0;i<n;i++){
            lmax = max(lmax, arr[i]);
            if(lmax <= rmin[i+1]) chunks++;
        }
        
        return chunks;
    }
};
