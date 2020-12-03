class Solution {
public:
    string decodeAtIndex(string S, int K) {
        long long int size = 0;
        int n = S.size();
        
        for(int i=0;i<n;i++){
            if(isalpha(S[i])) size++;
            else size = size * (S[i]-'0');
        }
        
        string ans = "";
        for(int i=n-1;i>=0;i--){
            K = K % size;
            if(K == 0 && isalpha(S[i])){
                ans += S[i];
                break;
            }
            
            if(!isalpha(S[i])){
                size = size / (S[i]-'0');
            }else
                size--;
        }
        
        return ans;
    }
};
