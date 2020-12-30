class Solution {
public:
    
    vector<int> fact,digit;
    
    void getans(string &ans,int n,int k){
        
        if(n==1){
            ans += to_string(digit.back());
            return;
        }
        
        int index = k/fact[n-1];
        
        if(k%fact[n-1] == 0) index--;
        
        ans += to_string(digit[index]);
        digit.erase(digit.begin()+index);
        
        k -= index*fact[n-1];
        getans(ans,n-1,k);
    }
    
    string getPermutation(int n, int k) {
        
        fact.push_back(1);
        int f = 1;
        for(int i=1;i<=n;i++){
            f*=i;
            fact.push_back(f);
        }
        
        for(int i=1;i<=n;i++){
            digit.push_back(i);
        }
        string ans = "";
        getans(ans,n,k); 
        return ans;
    }
};
