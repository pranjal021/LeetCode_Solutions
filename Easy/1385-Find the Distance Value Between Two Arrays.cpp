//Method 1:

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans = 0;
        
        for(int i=0;i<arr1.size();i++){
           
            bool flag = true;

            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    flag = false;
                    break;
                }
            }
            
            if(flag) ans++;
        }
        
        return ans;
    }
};

//Method 2:

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int ans = 0;
        
        for(int i=0;i<arr1.size();i++){
           
            if(upper_bound(arr2.begin(), arr2.end(), arr1[i]+d) == 
               lower_bound(arr2.begin(),arr2.end(), arr1[i]-d)) ans++;
            
        }
        
        return ans;
    }
};
