class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> arr{};
        int a = S.length() + 1;
        int b = -1;
        
        for(auto c: S){
            if(c == 'D'){
                arr.push_back(a-1);
                a--;
            }else{
                arr.push_back(b+1);
                b++;
            }
        }
        
        if(S[S.length()-1] == 'D'){
            arr.push_back(a-1);
        }else{
            arr.push_back(b+1);
        }
        return arr;
    }
};
