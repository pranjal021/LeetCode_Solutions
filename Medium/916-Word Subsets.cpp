class Solution {
public:
    
    vector<int> counter(string x){
        vector<int> count(26);
        
        for(auto c : x){
            count[c - 'a']++;
        }
        return count;
    }
    
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        
        vector<int> tmp(26), count(26);
        vector<string> ans;
        
        int i;
        
        for(auto x : B){
            tmp = counter(x);
            for(i = 0; i < 26; i++)
                count[i] = max(count[i], tmp[i]);
        }
        
        for(auto x : A){
            tmp = counter(x);
            for(i=0;i<26;i++){
                if(tmp[i] < count[i])
                    break;
            }
            if(i == 26) ans.push_back(x);
        }
        
        return ans;
    }
};
