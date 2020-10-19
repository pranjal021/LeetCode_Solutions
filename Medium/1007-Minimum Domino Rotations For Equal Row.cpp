class Solution {
public:
    
    int countDomino(vector<int> &A,vector<int> &B, int num){
        int countA =0;
        int countB =0;
        
        for(int i=0;i<A.size();i++){
            if(A[i]!=num && B[i]!=num){
                return -1;
            }
            if(A[i]!=num) countA++;
            if(B[i]!=num) countB++;
        }
        
        return min(countA,countB);
    }
    
    int minDominoRotations(vector<int>& A, vector<int>& B) {
        int res1 = countDomino(A,B,A[0]);
        int res2 = countDomino(A,B,B[0]);
        return min(res1,res2)>0 ? min(res1,res2) : max(res1,res2);
    }
};
