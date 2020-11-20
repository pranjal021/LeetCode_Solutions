class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string res, temp = countAndSay(n-1);
        
        int count = 1;
        char c = temp[0];
        for(int i=1;i<temp.size();i++){
            if(temp[i] == c){
                count++;
            }else{
                res += to_string(count);
                res.push_back(c);
                c = temp[i];
                count = 1;
            }
        }
        res += to_string(count);
        res.push_back(c);
        return res;
    }
};
