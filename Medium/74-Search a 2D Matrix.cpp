class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)return false;
        
        int m = matrix.size();
        int n = matrix[0].size();
        int l=0;
        int r = m*n -1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            int val = matrix[mid/n][mid%n];
            if(val > target) r = mid-1;
            else if (val < target) l = mid+1;
            else return true;
        }
        return false;
    }
};