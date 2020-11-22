class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        
        vector<int> ans(code.size(),0);
        
        for(int i=0;i<code.size();i++){
            
            if(k > 0){
                int total = 0;
                for(int count = 1 ; count <= k ; count++){
                    int num = i + count;
                    num = num % code.size();
                    total += code[num];
                }
                ans[i] = total;
            }
            else if(k < 0){
                int total = 0;
                for(int count = -1 ; count >= k ; count--){
                    int num = i + count;
                    if(num < 0){
                        num = num + code.size();
                    }
                    total += code[num];
                }
                ans[i] = total;
            }
            else if(k == 0){
                ans[i] = 0;
            }
            
        }
        
        return ans;
    }
};
