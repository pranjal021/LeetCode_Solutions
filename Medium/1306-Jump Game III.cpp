class Solution {
public:
    
    bool helper(vector<int> &arr,int s,vector<int> &v){
        if((s < 0) || (s >= arr.size()) || v[s]) return false;
        if(arr[s] == 0) return true;
        v[s] = true;
        return helper(arr, s + arr[s], v) || helper(arr, s - arr[s], v);
    }
    
    bool canReach(vector<int>& arr, int start) {
        vector<int> v(arr.size(),false);
        return helper(arr,start,v);
    }
};
