class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;
        int map[26] = {0};
        
        for(auto& x:allowed)
            map[x-'a']++;
        
        
        for(auto& word : words){
            
            bool isConsistent = true;
            
            for(auto& ch: word){
                
                if(map[ch - 'a'] == 0){
                    isConsistent = false;
                    break;
                }
                
            }
            
            if(isConsistent) ans++;
                
        }
            
        return ans;
    }
};
