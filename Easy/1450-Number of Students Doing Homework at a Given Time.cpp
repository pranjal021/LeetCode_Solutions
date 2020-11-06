class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans =0;
        int e=startTime.size();
        
        for(int i=0;i<e;i++){
            if(queryTime >= startTime[i] && (queryTime <= endTime[i])){
                ans++;
            }
        }
        return ans;
    }
};
