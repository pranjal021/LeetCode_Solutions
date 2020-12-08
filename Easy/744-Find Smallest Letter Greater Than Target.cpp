class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        
        if(target >= letters[n-1]) return letters[0];
        
        char ans;
        for(auto& ch:letters){
            if(target < ch) {
                ans = ch; break;
            }
        }
        return ans;
    }
};
