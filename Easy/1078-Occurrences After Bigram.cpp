class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        
        //lets store the words in a vector 'v', using stringstream
        stringstream ss(text);
        string word;
        vector<string> v;
        
        while(ss >> word) v.push_back(word);
        
        vector<string> ans;
        
        //iterate over every string in a vector and compare it with 'first' and 'second'
        for(int i=0;i<v.size()-2;i++){
            
            if(v[i] == first && v[i+1] == second){
                ans.push_back(v[i+2]);
            }
            
        }
        
        return ans;
    }
};
