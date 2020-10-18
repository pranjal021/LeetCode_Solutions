//Method 1: using SET 
//runtime complexity is better than using map.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n==0)return 0;
        
        int maxSize = 0;
        int i=0,j=0;
        set<char> st;
        
        while(j<n){
            
            if(st.count(s[j]) == 0){
                st.insert(s[j]);
                maxSize = max(maxSize , (int)st.size());
                j++;
            }else{
                st.erase(s[i]);
                i++;
            }
            
        }
        
        return maxSize;
    }   
};      

//Method 2: using map
//runtime complexity is very poor;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max =0;
        for(int i=0;i<=s.length();i++){
            
            int j=i;
            unordered_map<char,int> m;
            while(m.find(s[j]) == m.end()){
                m[s[j]]=j;
                
                if(j<s.length())
                    j++;
                if(j==s.length()){
                    return max<j-i ? j-i:max;
                }
            }
            max = max<j-i ? j-i:max;
        }
        return max;
    }
};