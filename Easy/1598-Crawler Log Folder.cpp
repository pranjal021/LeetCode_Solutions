class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int ans = 0; //this will keep track of our position
                     // i.e, how far we are from main folder 
        
        for(int i=0;i<logs.size();i++){
            
            string curr = logs[i];
            
            if(curr == "../")
                ans--; 
            else if(curr == "./")
                ans = ans;
            else
                ans++;
            
            if(ans < 0) ans  = 0;
            
        }
        
        if(ans < 0) ans = 0;
        
        return ans;
    }
};
