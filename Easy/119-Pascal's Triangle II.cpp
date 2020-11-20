class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res{1},cur{1};
        
        for(int i=1;i<=rowIndex;i++){
            res.push_back(1);
            for(int j=1;j<i;j++){
                res[j] = cur[j] + cur[j-1];
            }
            cur = res;
        }
        return cur;
    }
};
