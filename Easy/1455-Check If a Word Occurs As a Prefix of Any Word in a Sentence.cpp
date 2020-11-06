class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
  
        string word;
        
        stringstream ss(sentence);
        
        int len = searchWord.length();
        int i=1;
        
        while(ss >> word){
            string w = word.substr(0,len);
            if(w == searchWord)
                return i;
            i++;
        }
        
        return -1;
    }
};
