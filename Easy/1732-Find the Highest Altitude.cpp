class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n = gain.size();
        int max_height = 0;
        
        vector<int> heights(n+1); //since trip starts from '0' altitute
        
        heights[0] = 0; //storing the starting point
        
        for(int i = 1 ; i < n+1 ; i++){
            
            heights[i] = heights[i-1] + gain[i-1]; //maintaining prefix sum
            
            if(heights[i] > max_height) max_height = heights[i]; 
            
        }
        
        return max_height; //returning max height
    }
};

