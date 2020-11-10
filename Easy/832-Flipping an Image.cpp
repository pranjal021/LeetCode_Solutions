class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        
        int row = A.size();
        int col = A[0].size();
        
        for(int r=0;r<row;r++){
            int s = 0;
            int e = col-1;
            while(s<e){
                swap(A[r][s],A[r][e]);
                s++;
                e--;
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(A[i][j] == 0){
                    A[i][j] = 1;
                }else if(A[i][j] == 1){
                    A[i][j]  = 0;
                }
            }
        }
        
        return A;
    }
};
