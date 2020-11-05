//Method 1:

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int ans = 0;
        int row = mat.size();
        int col = mat[0].size();
        
        for(int r=0;r<row;r++){
            
            for(int c=0;c<col;c++){
                
                if(mat[r][c] == 0){
                    
                    continue;
                    
                }else{
                    
                    int rSum = 0;
                    int cSum = 0;
                    //check row
                    for(int i=0;i<col;i++){
                        if(mat[r][i] == 1) rSum++;
                    }
                    
                    //check col
                    for(int i=0;i<row;i++){
                        if(mat[i][c] == 1) cSum++;
                    }
                    
                    if(rSum == 1 && cSum == 1) ans++;
                        
                }
            }
        }
        
        return ans;
    }
};
