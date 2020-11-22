class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> key{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> s;
        
        for(int i=0;i<words.size();i++){
            string curr  =words[i];
            string ans = "";
            for(int j=0;j<curr.length();j++){
                ans += key[curr[j]-'a'];
            }
            s.insert(ans);
        }
        
        return s.size();
    }
};
