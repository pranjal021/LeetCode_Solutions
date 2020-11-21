class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry = 0;
        string ans;
        
        int i = num1.length()-1;
        int j = num2.length()-1;
        
        while(i>=0 || j>=0 || carry >=1){
            int d1 = i >=0 ? num1[i--]-'0' : 0;
            int d2 = j >=0 ? num2[j--]-'0' : 0;
            int sum = d1 + d2 + carry;
            carry = sum/10;
            sum = sum%10;
            ans = to_string(sum) + ans;
        }
        
        return ans == "" ? "0" : ans;
    }
};
