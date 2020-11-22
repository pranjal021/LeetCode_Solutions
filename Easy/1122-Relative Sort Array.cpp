class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        int h[1001] = {0};
        
        int a = arr1.size();
        int b = arr2.size();
        
        for(int i=0;i<a;i++){
            h[arr1[i]]++;
        }
        
        int j=0;
        for(int i=0;i<b;i++){
            while(h[arr2[i]]){
                arr1[j++] = arr2[i];
                h[arr2[i]]--;
            }
        }
        
        for(int i=0;i<=1000;i++){
            while(h[i]--){
                arr1[j++] = i;
            }
        }
        
        return arr1;
    }
};
