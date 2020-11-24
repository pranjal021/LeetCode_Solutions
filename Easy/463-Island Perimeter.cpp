class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
        int repeat = 0;
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j] == 1){
                    count ++;
                    if(i != 0) if(grid[i-1][j] == 1) repeat++;
                    if(j != 0) if(grid[i][j-1] == 1) repeat++;
                }
                    
            }
        }
        
        return count*4 - repeat*2;
    }
};
