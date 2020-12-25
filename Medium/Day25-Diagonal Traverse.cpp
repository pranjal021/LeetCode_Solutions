class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        
        map<int, vector<int>> m;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                m[i+j].push_back(matrix[i][j]);
            }
        }
        
        for(auto& i:m){
            if(i.first % 2 == 0){
                
                for(int j=i.second.size()-1;j>=0;j--){
                    res.push_back(i.second[j]);
                }
                
            }else{
                
                for(int j=0;j<i.second.size();j++){
                    res.push_back(i.second[j]);
                }
                
            }
        }
        
        return res;

    }
};
