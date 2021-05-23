class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        
        int maxValueSoFar = 0, chunks = 0;
        
        for(int i=0;i<arr.size();i++){
            maxValueSoFar = max(maxValueSoFar, arr[i]); 
            if(i == maxValueSoFar) chunks++;
        }
        
        return chunks;
    }
};
