//Method 1:
class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        string w;
        string ans;
        
        while(ss >> w) ans = " " + w + ans;
            
        return ans.substr(1);
    }
};

//Method 2:

class Solution {
public:
    string reverseWords(string s) {
        
        string res,tmp;
        int i=0, j , n = s.size();
        
        while(true){
            
            while(i < n && s[i] == ' ') i++;
            
            if(i >= n) break;
            
            int j = i+1;
            
            while(j < n && s[j] != ' ')j++;
            
            tmp = s.substr(i,j-i);
            
            res = " " + tmp + res;
            
            i = j+1;
            
        }
        
        return res.substr(1);        
    }
};
