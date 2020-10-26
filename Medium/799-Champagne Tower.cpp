class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        
        vector<vector<double>> v(102,vector<double>(102,0));
        
        v[0][0] = poured;
        
        for(int i=0;i<query_row;i++){
            for(int j=0;j<=i;j++){
                
                double flow = (v[i][j]-1)/2.0;
                
                if(flow>0){
                    v[i+1][j] += flow;
                    v[i+1][j+1] += flow;
                }
                
            }
        }
        
        return min(1.0,v[query_row][query_glass]);
    }
};
