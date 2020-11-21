class Solution {
public:
    int countSegments(string s) {
        
        stringstream ss(s);
        string word;
        int res = 0;
        
        while(ss >> word){
            res++;
        }
        return res;
    }
};
