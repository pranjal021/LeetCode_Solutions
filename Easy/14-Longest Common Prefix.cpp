class Solution {
public:
    
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        
        string ans = "";
        
        if(n==0)return ans;
        
        int index = 0;
        
        for(auto c:strs[0]){
            for(int i=1;i<n;i++){
                if(strs[i][index] != c){
                    return ans;
                }
            }
            ans += c;
            index++;
        }
        
        return ans;
    }
};
