class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int arr[10000]{0};
        for(auto x:A){
            arr[x]++;
        }
        for(int i=0;i<10000;i++){
            if(arr[i] >0 && arr[i] == (A.size()/2)){
                return i;
            }
        }
        return 0;
    }
};
