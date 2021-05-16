class Solution {
public:
    
    bool compare(unordered_map<char, int> sm, unordered_map<char, int> pm){
        
        for(auto x : sm){
            char val = x.first;
            if(sm[val] != pm[val]){
                return false;
            }
        }
        
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char, int> sm;
        unordered_map<char, int> pm;
        
        for(int i=0;i<p.size();i++){
            char ch1 = p[i];
            char ch2 = s[i];
            pm[ch1]++;
            sm[ch2]++;
        }
        
        int i = p.size();
        vector<int> ans;
        
        while(i < s.size()){
            
            if(compare(sm, pm) == true){
                ans.push_back(i - p.size());
            }
            
            char cha = s[i];
            char chr = s[i - p.size()];
            
            sm[cha]++;
            
            if(sm[chr] == 1){
                sm.erase(chr);
            }else{
                sm[chr]--;
            }
            i++;
        }
        
        if(compare(sm, pm) == true){
            ans.push_back(i - p.size());
        }
        
        return ans;
    }
};
