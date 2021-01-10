class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        int n = encoded.size();
        
        vector<int> arr(n+1);
        arr[0] = first;
        
        for(int i=0;i<n;i++){
            arr[i+1] = encoded[i] ^ arr[i];
        }
        
        return arr;
    }
};
