//Problem 1002: Find Common Characters (Easy)

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> ans;
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        
        for(auto x:A[0]){
            v1[x-'a']++;
        }
        
        for(int i=1;i<A.size();i++){
            //fill v2 vector
            for(auto x:A[i]){
                v2[x-'a']++;
            }
            
            for(int i=0;i<26;i++){
                v1[i] = min(v1[i],v2[i]);
                v2[i]=0;
            }
        }
        
        
        for(int i=0;i<26;i++){
            int count = v1[i];
            if(count>0){
                while(count--){
                    string s;
                    char ch = i + 'a';
                    s = ch;
                    ans.emplace_back(s);
                }
            }
            
        }
        
        return ans;
        
    }
};