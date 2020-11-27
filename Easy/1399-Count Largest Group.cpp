class Solution {
public:
    
    int digitSum(int n){
        int s = 0;
        while(n){
            s += n%10;
            n = n/10;
        }
        return s;
    }
    
    int countLargestGroup(int n) {
        vector<int> v(37,0);
        for(int i=1;i<=n;i++){
            v[digitSum(i)]++;
        }
        
        int c = 0;
        int m = *max_element(v.begin(),v.end());
        for(auto x:v){
            if(x == m) c++;
        }
        return c;
    }
};
