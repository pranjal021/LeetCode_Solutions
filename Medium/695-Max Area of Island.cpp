class Solution {
public:
    
    int dfs_helper(vector<vector<int>> &grid,int i,int j,int n,int m,vector<vector<int>> &dir){
        
        grid[i][j] = 0;
        
        int area = 1;
        
        for(int d=0;d<dir.size();d++){
            int r = i + dir[d][0];
            int c = j + dir[d][1];
            
            if(r>=0 && c>=0 && r<n && c<m && grid[r][c] == 1){
                area += dfs_helper(grid,r,c,n,m,dir);
            }
        }
        
        return area;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        if(grid.size() == 0|| grid[0].size() == 0){
            return 0;
        }
        
        int area = 0;
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>> dir{{1,0}, {0,-1}, {-1,0}, {0,1}};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j] == 1){
                    area = max(area, dfs_helper(grid,i,j,n,m,dir));
                }
                
                
            }
        }
        
        return area;
    }
};
