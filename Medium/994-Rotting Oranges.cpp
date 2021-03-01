class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<int> q;
        int time = 0;
        int fresh_orange = 0;
        
        vector<vector<int>> dir{{1,0}, {0,-1}, {-1,0}, {0,1}};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j] == 1){
                    fresh_orange++;
                }else if(grid[i][j] == 2){
                    q.push(i * m + j);
                }
                
            }
        }
        
        if(fresh_orange == 0){
            return 0;
        }
        
        while(!q.empty()){
            
            int s = q.size();
            while(s-- > 0){
                
                int f = q.front();
                q.pop();
                
                int i = f/m;
                int j = f%m;
                
                for(int d=0;d<dir.size();d++){
                    int x = i + dir[d][0];
                    int y = j + dir[d][1];
                    
                    if(x>=0 && y>=0 && x<n && y<m && grid[x][y] == 1){
                        fresh_orange--;
                        grid[x][y] = 2;
                        q.push(x * m + y);
                        if(fresh_orange == 0){
                            return time+1;
                        }
                    }
                }
            }
            time++;
        }
        
        return -1;
    }
};
