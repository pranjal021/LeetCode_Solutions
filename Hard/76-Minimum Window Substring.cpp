class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> m;
        for(auto ch:t) m[ch]++;
        int count = 0;
        int low = 0, min_len = INT_MAX, min_start = 0;
        for(int high = 0; high < s.size(); high++){
            if(m[s[high]] > 0) count++;
            m[s[high]]--;
            if(count == t.size()){
                while(low < high && m[s[low]] < 0) m[s[low]]++, low++;
                if(min_len > high-low) min_len = high - (min_start=low)+1;
                m[s[low++]]++;
                count--;
            }
        }
        
        return min_len == INT_MAX ? "" : s.substr(min_start, min_len);
    }
};
