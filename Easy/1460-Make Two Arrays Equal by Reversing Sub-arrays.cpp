//Method 1: using sorting 

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        if(target.size() != arr.size()) return false;
        
        int n = arr.size();
        
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            if(arr[i] != target[i]) return false;
        }
        
        return true;
    }
};

//Method 2: without sort

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        if(target.size() != arr.size()) return false;
        
        int n = target.size();
        int freq[1001] = {0};
        
        for(int i=0;i<n;i++){
            freq[target[i]]++;
            freq[arr[i]]--;
        }
        
        for(int i=0;i<1001;i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};
