class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> max_in_col;
        vector<int> min_in_row;
        vector<int> ans;
        
        for(int j=0 ; j < matrix[0].size() ; j++){
            int max = INT_MIN;
            for(int i=0;i<matrix.size();i++){
                if(max < matrix[i][j]){
                    max = matrix[i][j];
                }
            }
            
            max_in_col.push_back(max);
        }
        
        for(int i=0;i<matrix.size();i++){
            int min = INT_MAX;
            for(int j=0 ; j<matrix[i].size() ; j++){
                if(min > matrix[i][j]){
                    min = matrix[i][j];
                }
            }
            min_in_row.push_back(min);
        }
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                
                if(matrix[i][j] == min_in_row[i] && matrix[i][j] == max_in_col[j]){
                    ans.push_back(matrix[i][j]);
                }
                
            }
        }
        
        return ans;
    }
};
