class Solution {
public:
    string longestWord(vector<string>& words) {
        
        sort(words.begin(), words.end());
        
        unordered_set<string> s;
        string res;
        
        for(auto& word:words){
            if(word.size() == 1 || s.count(word.substr(0,word.size()-1))){
                res = word.size() > res.size() ? word : res;
                s.insert(word);
            }
          
        }
        
        return res;
    }
};
