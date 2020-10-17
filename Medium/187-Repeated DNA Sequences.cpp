class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.empty() || s.length()<11)
            return vector<string>();
        
        unordered_map<string,int> m;
        vector<string> res;
        
        for(int i=0;i<s.length()-5;i++){
            if(m.find(s.substr(i,10))!=m.end()){
                if(m[s.substr(i,10)]>0){
                    res.push_back(s.substr(i,10));
                    m[s.substr(i,10)] *= -1;
                }
            }else{
                m[s.substr(i,10)]++;
            }
        }
        
        return res;
    }
};
