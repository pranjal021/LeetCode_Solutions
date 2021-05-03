class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        
        if(k == 0) return 1.0;
        
        vector<vector<double>> curr(n, vector<double>(n, 0.0));
        vector<vector<double>> next(n, vector<double>(n, 0.0));
        
        curr[row][column] = 1.0;
        
        int r[] = {1,2,2,1,-1,-2,-2,-1};
        int c[] = {2,1,-1,-2,-2,-1,1,2};
        
        for(int m=0;m<k;m++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    
                    if(curr[i][j] != 0){
                        
                        for(int d=0;d<8;d++){
                            int ni = i + r[d];
                            int nj = j + c[d];
                            
                            if(ni>=0 && nj>=0 && ni<n && nj<n){
                                next[ni][nj] += curr[i][j] / 8.0;
                            }
                            
                        }
                        
                    }
                    
                }
            }
            
            curr = next;
            fill(next.begin(), next.end(), vector<double>(n, 0.0));
        }
        
        double ans = 0.0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans += curr[i][j];
            }
        }
        
        return ans;
    }
};
