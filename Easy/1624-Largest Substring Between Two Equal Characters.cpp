class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        int n = s.length();
        unordered_map<char,int> m; // used to store the end position of different character
        
        for(int i=0;i<n;i++){
            
            char ch = s[i];
            
            if(m.count(ch))  // if current char is already present, then update the last position
                m[ch] = i;
            else             //if not present, then add in hash-map
                m[ch] = i;
            
        }
        
        int maxAns = INT_MIN;
        
        for(int i=0;i<n;i++){
            
            char curr_char = s[i]; 
            
            int end_position_of_curr_char = m[curr_char];
            
            int len = end_position_of_curr_char - i - 1;
            
            maxAns = max(maxAns,len);
        }
        
        return maxAns;
        
    }
};
