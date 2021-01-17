class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        int ans = 0, maxlen = 0;
        
        for(int i = 0 ; i < rectangles.size() ; i++){
            
            int len = min(rectangles[i][0], rectangles[i][1]);
            maxlen = max(maxlen,len);
            
        }
        
        for(int i = 0 ; i < rectangles.size() ; i++){
            
            int len = min(rectangles[i][0], rectangles[i][1]);
            if(len == maxlen) ans++;
            
        }
        
        return ans;
    }
};
