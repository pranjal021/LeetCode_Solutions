class Solution {
public:
    
    int count  = 0;
    
    bool canPlace(vector<string> &board,int row,int col){
        
        for(int i=row;i>=0;i--)
            if(board[i][col] == 'Q') return false;
        
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j] == 'Q') return false;
        }
        
        for(int i=row,j=col;i>=0&&j<board.size();i--,j++)
            if(board[i][j] == 'Q') return false;
        
        return true;
        
    }
    
    bool dfs(vector<string> &board,int row){
        if(row == board.size()){
            count++;
            return false;
        }
        
        for(int i=0;i<board.size();i++){
            if(canPlace(board,row,i)){
                board[row][i] = 'Q';
                dfs(board,row+1);
                board[row][i] = '.';
            }
        }
        return false;
    }
    
    int totalNQueens(int n) {
        if(n <= 0) return 0;
        vector<string> board(n, string(n,'.'));
        dfs(board,0);
        return count;
    }
};
