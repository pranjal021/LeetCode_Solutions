class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int s = 0;
        int e = A.size()-1;
        while(s<=e){
            if(A[s] % 2 != 0){
                swap(A[s],A[e--]);
            }else{
                s++;
            }
        }
        
        return A;
    }
};
