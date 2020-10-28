class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if(matrix.empty())return;
        int row_size = matrix.size();
        int col_size = matrix[0].size();
        bool firstRow = false;
        bool firstCol = false;
        
        for(int c=0;c<col_size;c++){
            if(matrix[0][c] == 0) firstRow = true;
        }
        
        for(int r=0;r<row_size;r++)
            if(matrix[r][0] == 0) firstCol = true;
        
        for(int r=1;r<row_size;r++){
            for(int c=1;c<col_size;c++){
                if(matrix[r][c] == 0){
                    matrix[r][0] = matrix[0][c] = 0;
                }
            }
        }
        
        for(int c=1;c<col_size;c++){
            if(matrix[0][c] == 0){
                for(int r=1;r<row_size;r++){
                    matrix[r][c] = 0;
                }
            }
        }
        
        for(int r=1;r<row_size;r++){
            if(matrix[r][0] == 0){
                for(int c=1;c<col_size;c++){
                    matrix[r][c] = 0;
                }
            }
        }
        
        if(firstRow) for(int c=0;c<col_size;c++) matrix[0][c] =0;
        if(firstCol) for(int r=0;r<row_size;r++) matrix[r][0] =0;
        
        return;
   }
};
