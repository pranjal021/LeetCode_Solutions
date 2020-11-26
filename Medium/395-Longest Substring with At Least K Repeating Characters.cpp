class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size() == 0 || k > s.size()) return 0;
        if(k == 0) return s.size();
        
        int map[26] = {0};
        
        for(int i=0;i<s.size();i++){
            map[s[i]-'a']++;
        }
        
        int idx = 0;
        while(idx < s.size() && map[s[idx]-'a'] >= k) idx++;
        if(idx == s.size()) return s.size();
        
        int left = longestSubstring(s.substr(0,idx), k);
        int right = longestSubstring(s.substr(idx+1), k);
        
        return max(left,right);
    }
};
