
// problem 316 : Remove Duplicate Letters

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> count(26,0);
        vector<bool> isUsed(26,false);
        string str = "";
        
        for(auto i:s){
            count[i-'a']++;
        }
        
        for(auto x:s){
            
            count[x-'a']--;
            
            if(isUsed[x-'a'] == false){
                
                while(str.length()>0 && x<str.back() && count[str.back()-'a']>0){
                    isUsed[str.back()-'a'] = false;
                    str.pop_back();
                }
                
                str.push_back(x);
                isUsed[x-'a']=true;
                
            }
            
        }
        
        return str;
    }
};