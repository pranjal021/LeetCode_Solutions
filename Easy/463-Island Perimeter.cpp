class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        if(n == 0|| m == 0) return ans;
        
        vector<vector<int>> dir{{1,0}, {0,-1}, {-1,0}, {0,1}};
        
        int count = 0;
        int nbrs = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j] == 1){
                    count++;
                    
                    for(int d=0;d<dir.size();d++){
                        int r = i + dir[d][0];
                        int c = j + dir[d][1];
                        
                        if(r>=0 && c>=0 && r<n && c<m && grid[r][c] == 1){
                            nbrs++;
                        }
                    }
                }
                
            }
        }
        
        ans = 4 * count - nbrs;
        return ans;
    }
};
