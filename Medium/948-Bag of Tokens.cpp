class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        int length = tokens.size();
        if(length==0)return 0;
        
        sort(tokens.begin(),tokens.end());
        
        if(tokens[0]>P)return 0;
        int res=0;
        int j = length-1;
        for(int i=0;i<=j;i++){
            P -= tokens[i];
            if(P>=0)
                res++;
            else
                P += tokens[j--];
        }
        return res;
    }
};
