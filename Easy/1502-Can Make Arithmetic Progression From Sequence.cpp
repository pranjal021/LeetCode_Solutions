//Method 1: Using sort

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        int diff = arr[1]-arr[0];
        
        for(int i=2;i<arr.size();i++){
            if((arr[i]-arr[i-1]) != diff){
                return false;
            }
        }
        
        return true;
    }
};

//Method 2: using set

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        unordered_set<int> s(arr.begin(),arr.end());
        
        int max = *max_element(arr.begin(),arr.end());
        int min = *min_element(arr.begin(),arr.end());
        
        int diff = (max-min)/(arr.size()-1);
        
        for(int i=1;i<arr.size();i++){
            if(!s.count(min + i*diff)) return false;
        }
        
        return true;
    }
};
