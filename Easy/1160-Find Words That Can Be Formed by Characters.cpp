class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int ans = 0;
        vector<int> v(26,0);
        
        for(auto& ch:chars) v[ch - 'a']++;
        
        for(auto& w:words){
            
            vector<int> m = v;
            bool isGood = true;
            for(auto ch:w){
                if(--m[ch - 'a'] < 0){
                    isGood = false;
                    break;
                }
            }
            
            if(isGood) ans += w.size();
        }
        
        return ans;
    }
};
