class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        int m = nums.size();
        int n = nums[0].size();
        
        if(m==0) return nums;
        
        if(m*n != r*c) return nums;
        
        vector<vector<int>> res(r,vector<int> (c));
        
        int row = 0,col = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                res[row][col] = nums[i][j];
                col++;
                
                if(col == c){
                    row++;
                    col = 0;
                }
                
            }
        }
        
        return res;
    }
};
