//Method 1:

class Solution {
public:
    
    bool canDivide(string s,string t){
        
        string temp = t;
        
        while(t.length() <= s.length()){
            if(s == t) return true;
            t += temp;
        }
        
        return false;
    }
    
    string gcdOfStrings(string str1, string str2) {
        
        string ans = "";
        
        for(int i = 0 ; i < str2.length(); i++){
            
            string curr = str2.substr(0,i+1);
            
            if(canDivide(str1,curr) && canDivide(str2,curr)){
                
                if(curr.length() > ans.length()){
                    ans = curr;
                }
                
            }
            
        }
        
        return ans;
    }
};

//Method 2:

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1.size() < str2.size()) return gcdOfStrings(str2,str1);
        if(str2.empty()) return str1;
        if(str1.substr(0,str2.size()) != str2) return "";
        return gcdOfStrings(str1.substr(str2.size()), str2);
        
    }
};
