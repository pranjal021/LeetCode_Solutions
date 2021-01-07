class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m==0) return 0;
        int n = matrix[0].size();
        int result = 0;
        
        vector<int> h(n,0);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '0'){
                    h[j] = 0;
                }else{
                    h[j]++;
                }
            }
            
            result = max(result, largestArea(h));
        }
        
        return result;
    }
    
    int largestArea(vector<int> &h){
        int area = 0;
        stack<int> s;
        int n = h.size();
        
        for(int i = 0 ; i < n ; i++){
            while(!s.empty() && h[s.top()] >= h[i]){
                int top = s.top();
                s.pop();
                
                int start;
                if(s.empty()){
                    start = -1;
                }else{
                    start = s.top();
                }
                
                area = max(area , h[top]*(i - start - 1));
            }
            s.push(i);
        }
        
        
        while(!s.empty()){
            int top = s.top();
            s.pop();
            
            int start;
            if(s.empty()){
                start = -1;
            }else{
                start = s.top();
            }
            area = max(area, h[top] *(n - start -1));
        }
        
        
        return area;
    }
};
