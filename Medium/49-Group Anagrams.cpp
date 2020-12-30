class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;
        
        unordered_map<string,vector<string>> m;
        
        for(auto w:strs){
            string tmp = w; // store the string in a tmp variable
            sort(tmp.begin(), tmp.end()); //sort it
            m[tmp].push_back(w); //and push it in a map
        }
        
        for(auto x:m){
            ans.push_back(x.second);
        }
        
        return ans;
    }
};

//For eg: 
//before sorting: ["eat","tea","tan","ate","nat","bat"]
//after sorting : ["aet","aet","ant","aet","ant","abt"]
//it is clearly observed that, how we have to store the string in which particular bucket (map) 
