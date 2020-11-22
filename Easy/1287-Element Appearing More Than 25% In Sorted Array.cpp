class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int n = arr.size();
        int ans = 0;
        unordered_map<int,int> m;
        
        for(auto& x:arr){
            m[x]++;
        }
        
        for(auto& x:m){
            if(x.second > (n/4)){
                ans = x.first;
                break;
            }
        }
        return ans;
    }
};
