class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        vector<vector<int>> indegree(n, vector<int>(m,0));
        
        vector<vector<int>> dir{{1,0}, {0,-1}, {-1,0}, {0,1}};
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                for(int d = 0 ; d < dir.size() ; d++){
                    
                    int x = i + dir[d][0];
                    int y = j + dir[d][1];
                    if(x>=0 && y>=0 && x<n && y<m && matrix[x][y] > matrix[i][j]){
                        indegree[x][y]++;
                    }
                }
                
            }
        }
        
        
        queue<int> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(indegree[i][j] == 0){
                    q.push(i * m + j);
                }
            }
        }
        
        int lvl = 0;
        
        while(!q.empty()){
            
            int s = q.size();
            
            while(s-- > 0){
                
                int f = q.front();
                q.pop();
                int i = f / m;
                int j = f % m;
                
                for(int d = 0;d<dir.size();d++){
                    int x = i + dir[d][0];
                    int y = j + dir[d][1];
                    if(x>=0 && y>=0 && x<n && y<m && matrix[x][y] > matrix[i][j] && --indegree[x][y] == 0){
                        q.push(x * m + y);
                    }
                }
                
                
            }
            
            lvl++;
        }
        
        return lvl;
    }
};
