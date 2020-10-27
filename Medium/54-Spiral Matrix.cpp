class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL); 
        cout.tie(NULL); 
        
        vector<int> res;
        
        if(matrix.size()==0)return res;
        
        int row = matrix.size();
        int col = matrix[0].size();
      
        
        vector<int> ans(row*col);
        
        int r = 0; //represents starting row
        int c = 0; //represents starting col
        int cnt = 0; //represents index
                
        
        
        while(r<row && c<col){
            
            for(int i=c;i<col;i++){
                ans[cnt++] = matrix[r][i];
            }
            
            r++;
            
            for(int i=r;i<row;i++){
                ans[cnt++] = matrix[i][col-1];
            }
            col--;
            
            if(r < row){
                for(int i=col-1;i>=c;i--){
                    ans[cnt++] = matrix[row-1][i];
                }
                row--;
            }
            
            if(c < col){
                for(int i=row-1;i>=r;i--){
                    ans[cnt++] = matrix[i][c];
                }
                c++;
            }
            
        }
        
        return ans;   
    }
};
