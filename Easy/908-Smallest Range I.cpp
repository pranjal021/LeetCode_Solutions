class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int minn = *min_element(A.begin(),A.end());
        int maxx = *max_element(A.begin(),A.end());
        
        return max(0, maxx-minn-2*K);
    }
};
