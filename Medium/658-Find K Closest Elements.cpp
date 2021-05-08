class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> ans;
        
        priority_queue<pair<int,int>> pq;
        int n = arr.size();
        
        for(int i=0;i<k;i++){
            pq.push(make_pair( abs(x - arr[i]), arr[i]));
        }
        
        for(int i=k;i<n;i++){
            int curr_diff = abs(arr[i]-x);
            auto t = pq.top();
            if(t.first > curr_diff || t.second > arr[i]){
                pq.pop();
                pq.push(make_pair(curr_diff , arr[i] ));
            }
        }
        
        while(pq.size() > 0){
            auto t = pq.top();
            pq.pop();
            ans.push_back(t.second);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};
