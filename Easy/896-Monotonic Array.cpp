class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        bool increasing = true;
        bool decreasing = true;
        
        //lets check if it is monotonic increasing or not!!
        for(int i=0;i<A.size()-1;i++){
            if(A[i] > A[i+1]){
                increasing = false;
                break;
            }
        }
        
        //lets check if it is monotonic decreasing or not!!
        for(int i=0;i<A.size()-1;i++){
            if(A[i] < A[i+1]){
                decreasing = false;
                break;
            }
        }
        
        return increasing|decreasing;
    }
};
