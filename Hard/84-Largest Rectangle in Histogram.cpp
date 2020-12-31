class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int i = 0;
        int n = heights.size();
        int area = 0;
        int maxArea = 0;
        
        stack<int> s;
        
        for(;i<n;i++){
            
            if(s.empty()){
                s.push(i);
            }
            else{
                
                if(heights[i] >= heights[s.top()]){
                    s.push(i);
                }else{
                    
                    while(!s.empty() && heights[s.top()] > heights[i]){
                        int x = s.top(); s.pop();
                        
                        if(s.empty()){
                            area = heights[x] * i;
                        }else{
                            area = heights[x] * (i - s.top() -1);
                        }
                        
                        maxArea = max(maxArea, area);
                    }
                    
                    s.push(i);
                }   
            }
        }
        
        while(!s.empty()){
            int x = s.top(); s.pop();
            
            if(s.empty()){
                area = heights[x] * i;
            }else{
                area = heights[x] * (i - s.top() -1);
            }
            
            maxArea = max(area, maxArea);
        }
        
        return maxArea;
    }
};
