//METHOD 1:

class Solution {
public:
    int myAtoi(string str) {
        stringstream obj(str);
        int ans=0;
        obj>>ans;
        return ans;
    }
};

//METHOD 2:

class Solution {
public:
    int myAtoi(string s) {
        int res =0;
        bool is_positive = true;
        int i=0;
        
        while(s[i]==' ')
            i++;
        
        if(s[i]=='-'){
            is_positive = false;
            i++;
        }
        
        else if(s[i] == '+'){
            is_positive = true;
            i++;
        }
        
        s.erase(0,i);
        
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                
                int val = s[i]-'0';
                if((res > (INT_MAX-val)/10) && is_positive){
                    return INT_MAX;
                }
                if((res > (INT_MAX-val)/10) && !is_positive){
                    return INT_MIN;
                }
                
                res = res*10 + val;
                
                
            }else{
                break;
            }
        }
        
        if(!is_positive)
            return -res;
        else
            return res;
        
    }
};