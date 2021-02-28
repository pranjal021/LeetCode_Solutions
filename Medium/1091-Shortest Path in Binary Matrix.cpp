class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(n == 0 || m == 0) return -1;
        
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        
        vector<vector<int>> dir{{1,0}, {1,-1}, {0,-1}, {-1,-1}, {-1,0}, {-1,1}, {0,1}, {1,1}};
        
        queue<int> q;
        grid[0][0] = 1;
        
        int level = 1;
        
        q.push(0 * m +  0); // r * m + c;
        
        while(!q.empty()){
            
            int s = q.size();
            
            while(s-- > 0){
                
                int f = q.front();
                q.pop();
                
                int i = f / m;
                int j = f % m;
                
                if(i == n-1 && j == m-1){
                    return level;
                }
                
                for(int d = 0; d<dir.size();d++){
                    int r = i + dir[d][0];
                    int c = j + dir[d][1];
                    
                    if(r >= 0 && c >= 0 && r < n && c < m && grid[r][c] == 0){
                        q.push(r * m + c);
                        grid[r][c] = 1;
                    }
                }
            }
            
            level++;
        }
        
        return -1;
    }
};
