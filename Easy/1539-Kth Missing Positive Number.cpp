//Method 1,2,3 has almost similar approach, but different data structure is used.
//Method 4 is best among these.

//Method 1: Using Map 
//Run time : ~12ms 

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int ans = -1;
        unordered_map<int,bool> m;
        
        for(int i=0;i<arr.size();i++){
            m[arr[i]]=true;
        }
        
        for(int i=1;i<=2000;i++){
            int curr_number = i;
            
            if(!m.count(curr_number)){
                k--;
                if(k==0){
                    ans = i;
                    break;
                }
            }
        }
        
        return ans;
    }
};

//Method 2: using set
//Run time: ~24 ms

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int ans = -1;
        set<int> m;
        
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        
        for(int i=1;i<=2000;i++){
            int curr_number = i;
            
            if(s.find(curr_number) == s.end()){
                k--;
                if(k==0){
                    ans = i;
                    break;
                }
            }
        }
        
        return ans;
    }
};

//Method 3: Using vector
//Run time : ~120 ms 

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int ans = -1;
        
        for(int i=1;i<=2000;i++){
            int curr_number = i;
            
            if(std::find(arr.begin(),arr.end(),curr_number) == arr.end()){
                k--;
                if(k==0){
                    ans = i;
                    break;
                }
            }
        }
        
        return ans;
    }
};

//method 4:
// run time: ~8ms

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n = arr.size();
        int index = 0;
        int size = 1;
        
        while(size<arr[0]){
            index++;
            if(index == k) return size;
            size++;
        }
        
        for(int i=0;i<n-1;i++){
            size = 1;
            while(arr[i]+size<arr[i+1]){
                index++;
                if(index==k) return arr[i]+size;
                size++;
            }
        }
        
        return arr[n-1]+k-index;
    }
};
