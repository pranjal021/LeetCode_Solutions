class Solution {
public:
    int maximum69Number (int num) {
        
        vector<int> v; //converting num into vector of integers
        
        while(num){
            v.push_back(num%10);
            num = num/10;
        }
        
        // p.s. vector 'v' contain digits reverse of num
        //changing first digit we encounter of value '6' to value '9' 
       
        for(int i=v.size()-1;i>=0;i--){
            if(v[i] == 9) continue;
            else{
                v[i] = 9;
                break;
            }
        }
        
        int ans = 0;
        //converting back
        for(int i = v.size()-1;i>=0;i--){
            ans = ans*10 + v[i];
        }
        return ans;
    }
};
