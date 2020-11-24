class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        unordered_set<char> set1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> set2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> set3{'z','x','c','v','b','n','m'};
        vector<string> res;
        
        for(auto& word:words){
            bool flag = true;
            
            unordered_set<char> temp;
            
            if(set1.find(tolower(word[0])) != set1.end())
                temp = set1;
            else if(set2.find(tolower(word[0])) != set2.end())
                temp = set2;
            else
                temp = set3;
            
            for(auto& x:word){
                
                if(temp.find(tolower(x)) == temp.end()){
                    flag = false;
                    break;
                }
                
            }
            
            if(flag){
                res.push_back(word);
            }
            
        }
        
        return res;
    }
};
