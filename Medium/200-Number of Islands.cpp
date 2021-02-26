class Solution {
public:
    
    void dfs_helper(vector<vector<char>> &grid,int i,int j,int n,int m,vector<vector<bool>>& visited){
        
        if(i<0 || j<0 || i>=n || j>=m || visited[i][j] == true || grid[i][j] == '0'){
            return;
        }
        
        
        visited[i][j] = true;
        dfs_helper(grid, i+1, j,n,m,visited);
        dfs_helper(grid, i, j-1,n,m,visited);
        dfs_helper(grid, i-1, j,n,m,visited);
        dfs_helper(grid, i, j+1,n,m,visited);
        return;
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int count = 0;
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1' && visited[i][j] == false){
                    dfs_helper(grid,i,j,n,m,visited);
                    count++;
                }
            }
        }
        
        return count;
    }
};
