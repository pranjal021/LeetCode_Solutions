class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<int,int> mp;
        
        int m = ransomNote.length();
        int n = magazine.length();
        
        for(int i=0;i<n;i++){
            mp[magazine[i]-'a']++;
        }
        
        for(int i=0;i<m;i++){
            if(mp[ransomNote[i]-'a']-- <= 0)
                return false;
        }
        
        return true;
    }
};
