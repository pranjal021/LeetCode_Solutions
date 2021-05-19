//approach 1:

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        
        int n = arr.size();
        
        sort(arr.begin(), arr.end(), [](int i, int j){return abs(i) < abs(j);});
        
        unordered_map<int,int> m;
        for(auto x : arr){
            m[x]++;
        }
        
        for(auto x : arr){
            if(m[x] == 0) continue;
            
            if(m.find(2 * x) == m.end()){
                return false;
            }else if(m[2 * x] == 0){
                return false;
            }else{
                m[x]--;
                m[2 * x]--;
            }
            
        }
        
        return true;
    }
};

//approach 2: better run time then approach 1

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        
        unordered_map<int,int> m;
        for(auto x : arr){
            m[x]++;
        }
        
        vector<int> keys;
        for(auto x : m){
            keys.push_back(x.first);
        }
        
        sort(keys.begin(), keys.end(), [](int i, int j){return abs(i) < abs(j);});
        
        
        for(auto x : keys){
            
            if(m[x] > m[2 * x]) 
                return false;
            m[2*x] -= m[x];
        }
        
        return true;
    }
};
