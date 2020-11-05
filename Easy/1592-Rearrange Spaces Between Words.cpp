class Solution {
public:
    string reorderSpaces(string text) {
        string s, ans;
        stringstream ss (text);
        vector<string> words;
        
        while(ss >> s){
            words.push_back(s);
        }
        
        int space = count(text.begin(),text.end(),' ');
        int n = words.size();
        
        int quot = n==1?0:space/(n-1);
        int rem = n==1?space:space%(n-1);
        
        for(auto &w:words){
            if(!ans.empty()) ans += string(quot,' ');
            ans += w;
        }
        
        ans += string(rem,' ');
        return ans;
    }
};
