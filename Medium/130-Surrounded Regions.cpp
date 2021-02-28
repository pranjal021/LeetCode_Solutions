class Solution {
public:
    
    void dfs_helper(int i,int j,int n,int m,vector<vector<char>>& board,vector<vector<int>> dir){
        
        board[i][j] = '$';
        
        for(int d=0;d<dir.size();d++){
            int r = i + dir[d][0];
            int c = j + dir[d][1];
            
            if(r>=0 && c>=0 && r<n && c<m && board[r][c] == 'O'){
                dfs_helper(r,c,n,m,board,dir);
            }
        }
        
        return;
    }
    
    void solve(vector<vector<char>>& board) {
        
        int n = board.size();
        int m = board[0].size();
        
        if(n == 0 || m == 0) return;
        
        vector<vector<int>> dir{{1,0}, {0,-1}, {-1,0}, {0,1}};
        
        for(int i = 0 ; i < n ; i++){
            if(board[i][0] == 'O'){
                dfs_helper(i,0,n,m,board,dir);
            }
            if(board[i][m-1] == 'O'){
                dfs_helper(i,m-1,n,m,board,dir);
            }
        }
        
        for(int j = 0 ; j < m ; j++){
            if(board[0][j] == 'O'){
                dfs_helper(0,j,n,m,board,dir);
            }
            if(board[n-1][j] == 'O'){
                dfs_helper(n-1,j,n,m,board,dir);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                if(board[i][j] == '$'){
                    board[i][j] = 'O';
                }
            }
        }
        
        return;
    }
};
