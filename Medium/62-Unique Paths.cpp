//Method 1:

class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m,vector<int>(n,1));
        
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[0].size();j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        return dp[m-1][n-1];
    }
};

//Method 2:

class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<int> pre(n,1), curr(n,1);
        
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                curr[j] = pre[j] + curr[j-1];
            }
            swap(pre,curr);
        }
        return pre[n-1];
    }
};

//method 3:

class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<int> curr(n,1);
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                curr[j] += curr[j-1]; 
            }
        }
        return curr[n-1];
    }
};
