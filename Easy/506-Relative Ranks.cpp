class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        
        int n = nums.size();
        vector<string> ans(n);
        
        if(n == 0) return ans;
        
        priority_queue<pair<int,int>> pq;
        string s;
        
        for(int i=0;i<n;i++) pq.push({nums[i],i});
        
        for(int i=0;i<n;i++){
            if(i<3){
                switch(i){
                    case 0: s="Gold Medal"; break;
                    case 1: s="Silver Medal"; break;
                    case 2: s="Bronze Medal"; break;
                }
            }else s = to_string(i+1);
            
            ans[pq.top().second] = s;
            pq.pop();
        }
        
        return ans;
    }
};
