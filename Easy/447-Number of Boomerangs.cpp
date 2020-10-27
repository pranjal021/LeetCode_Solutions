class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int result = 0;
        
        for(int i=0;i<points.size();i++){
            
            unordered_map<int,int> m;
            
            for(int j=0;j<points.size();j++){
                int dist = pow(points[j][1] - points[i][1],2) + pow(points[j][0]-points[i][0],2);
                result += 2 * m[dist]++;
            }
        }
        return result;
    }
};
