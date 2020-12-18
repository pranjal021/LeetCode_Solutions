class Solution {
public:
    int compress(vector<char>& chars) {
        
        if(chars.size() < 2) return chars.size();
        
        int i = 0;
        int j = 0;
        
        while(i < chars.size()){
            
            chars[j] = chars[i];
            int cnt = 0;
            while(i < chars.size() && chars[i] == chars[j]){
                i++;
                cnt++;
            }
            
            if(cnt == 1){
                j++;
            }else{
                
                string s = to_string(cnt);
                for(auto ch:s)
                    chars[++j] = ch;
                j++;
            }
            
        }
        
        return j;
    }
};
