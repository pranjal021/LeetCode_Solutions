class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        
        int maxAns = INT_MIN;
        
        while(i<j){
            int area = min(height[i],height[j])*(j-i);
            
            if(height[i]<height[j])
                i++;
            else
                j--;
            
            if(area > maxAns){
                maxAns = area;
            }
        }
        
        return maxAns;
    }
};
