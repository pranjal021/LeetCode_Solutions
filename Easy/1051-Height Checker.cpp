class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        
        vector<int> v(heights);
        
        sort(v.begin(),v.end());
        
        int n = heights.size();
        
        for(int i=0;i<n;i++)
        {
            
            if(v[i] != heights[i]) ans++;
        
        }
    
        return ans;
    }
};
