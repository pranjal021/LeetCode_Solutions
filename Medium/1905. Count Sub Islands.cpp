class Solution {
public:
    
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, vector<vector<int>> &dir, int n, int m, int &flag){ 
        if(grid1[i][j] == 0){
            flag = false;
        }
        
        grid2[i][j] = 0;
        for(int d=0;d<dir.size();d++){
            int x = i + dir[d][0];
            int y = j + dir[d][1];
            
            if(x>=0 && y>=0 && x<n && y<m && grid2[x][y] == 1){
                dfs(grid1, grid2, x, y, dir, n ,m, flag);
            }
        }
        
        return;
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ans = 0;
        vector<vector<int>> dir{{-1,0}, {0,1}, {1,0}, {0,-1}};
        int n = grid1.size();
        int m = grid2[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid2[i][j] == 1){
                    int flag = true;
                    dfs(grid1, grid2, i, j, dir, n, m, flag);
                    ans += flag;
                }
            }
        }
        
        return ans;
    }
};
