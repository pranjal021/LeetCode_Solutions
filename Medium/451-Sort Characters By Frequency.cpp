//Method 1:
class Solution {
public:
    
    string frequencySort(string s) {
        
        int counts[256] = {0};
        for(auto ch:s) counts[ch]++;
        sort(s.begin(), s.end(), [&](char a,char b){
            return counts[a] > counts[b] || (counts[a] == counts[b] && a < b);
        });
        
        return s;
    }
};

//method 2:
class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> m;
        
        for(auto i:s) m[i]++;
        
        vector<pair<int,char>> v;
        
        for(auto p:m){
            v.push_back({p.second,p.first});
        }
        
        sort(v.begin(), v.end(), greater<pair<int,char>>());
        
        s = "";
        
        for(auto i:v) s += string(i.first,i.second);
        
        return s;
    }
};
