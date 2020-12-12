//Method 1:

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        for(int i=0;i<words.size()-1;i++){
            string word1 = words[i];
            string word2 = words[i+1];
            
            int i1= 0;
            int i2 = 0;
            
            while(word1[i1] == word2[i2]){
                i1++;
                i2++;
            }
            
            i1 = order.find(word1[i1]);
            i2 = order.find(word2[i2]);
            
            if(i1 > i2) return false;
        }
        
        return true;
    }
};

//Method 2:

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        int map[26] = {0};
        
        for(int i=0;i<26;i++){
            map[order[i] - 'a'] = i;
        }
        
        for(auto& w:words){
            for(auto& ch:w){
                ch = map[ch - 'a'];
            }
        }
        
        return is_sorted(words.begin(), words.end());
    }
};
