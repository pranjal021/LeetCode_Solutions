class Solution {
public:
    int countSubstrings(string s) {
        
        int n = s.size();
        int ans = 0;
        
        bool dp[n][n];
        
        memset(dp,0,sizeof dp);
        
        for(int g = 0 ; g < n ; g++){ //here 'g' represents gap between starting and ending char of a string
            
            for(int i = 0 , j = g ; j < n ; i++ , j++){
                
                if(g==0) //if gap is '0' that means {(0,0) , (1,1) , (2,2) , (3,3)... so on} : represent single char
                {
                    dp[i][j] = true;
                }
                else if(g == 1) //represents two characters {(0,1), (1,2) , (2,3),... so on}
                {
                    dp[i][j] = (s[i]==s[j]);
                }
                else //represents remaining cells
                {
                    if(s[i] == s[j] && dp[i+1][j-1] == true)
                    {
                        dp[i][j] = true;
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                }
                
                if(dp[i][j]) ans++;
            }
        }
        
        return ans;
    }
};

// lets say s = "abcb"
//then (g == 0) represents -> 'a', 'b', 'c' , 'd'
//(g == 1) represents -> "ab", "bc" , "cb"
//(g == 2) represents -> "abc" , "bcb"
//(g == 3) represents -> "abcb"
