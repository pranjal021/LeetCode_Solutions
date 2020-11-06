class Solution {
public:
    string thousandSeparator(int n) {
        if(n==0) return "0";
        
        stack<char> s;
        string ans= "";
        int count = 0;
        while(n>0){
            if(count==3){
                s.push('.');
                count=0;
            }
            
            s.push((n%10) + '0');
            count++;
            n=n/10;
        }
        
        
        while(!s.empty()){
            ans += s.top();
            s.pop();
        }
        return ans;
        
    }
};
