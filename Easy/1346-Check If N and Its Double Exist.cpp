class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        unordered_map<int,int> m;
        
        for(int i=0;i<arr.size();i++){
            
            m[arr[i]]++;
            
            if(arr[i]==0 && m[arr[i]] ==1) continue;
            
            if(m.count(arr[i]*2) >0 || ((arr[i]%2 ==0) && m.count(arr[i]/2) >0))
                return true;
            
        }
        
        return false;
    }
};