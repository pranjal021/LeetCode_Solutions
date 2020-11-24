class Solution {
public:
    string reverseStr(string s, int k) {
        
        int index = 0;
        while(index < s.size()){
            reverse(s.begin()+index, s.begin()+index+k > s.end() ? s.end() : s.begin()+index+k);
            index += 2*k;
        }
        
        return s;
    }
};
