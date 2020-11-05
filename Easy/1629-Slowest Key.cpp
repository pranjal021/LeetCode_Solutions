class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        
        char ans = keysPressed[0];
        int maxTime = releaseTimes[0];
        
        int n = keysPressed.length();
        
        for(int i=1;i<n;i++){
            
            int curr_time = releaseTimes[i]-releaseTimes[i-1];
            char curr_char = keysPressed[i];
            
            if(curr_time == maxTime){
                
                if(curr_char > ans) ans = curr_char;
                
            }else if(curr_time > maxTime){
                
                maxTime = curr_time;
                ans = curr_char;
                
            }            
            
        }
        
        return ans;   
    }
};
