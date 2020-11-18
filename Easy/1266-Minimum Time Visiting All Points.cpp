class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum = 0;
        for(int i=0;i<points.size()-1;i++){
            sum += max(abs(points[i][0]-points[i+1][0]) , abs(points[i][1]-points[i+1][1]));
        }
        return sum;
    }
};
