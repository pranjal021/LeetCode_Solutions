class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        
        auto total = accumulate(A.begin(),A.end(),0);
        if(total % 3 != 0) return false;
        
        int parts = 0;
        
        for(auto i=0, sum = 0; i<A.size();i++){
            sum += A[i];
            if(sum  == (parts+1)*total/3) parts++;
        }
        
        return parts >= 3;
    }
};
