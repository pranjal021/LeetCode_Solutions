class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || i+j == n-1){
                    ans += mat[i][j];
                }
            }
        }
        
        return ans;
        
    }
};
