class Solution {
public:
    int maxPower(string s) {
    
        int n = s.length();
        int maxAns = -1;
        int count;
        
        for(int i=0;i<n;i++){
            
            count = 0;
            char curr_char = s[i];
            
            int j = i;
            
            while(j<n && s[j]==curr_char){
                j++;
                count++;
            }
            
            maxAns = max(maxAns,count);
        }
        
        return maxAns;
    }
};
