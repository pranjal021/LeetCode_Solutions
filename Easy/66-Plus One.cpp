//Method 1:

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans(n);
        
        int sum = digits[n-1] + 1;
        int carry = sum/10;
        
        ans[n-1] = sum%10;
        
        for(int i=n-2;i>=0;i--){
            int temp = carry + digits[i];
            ans[i] = temp%10;
            carry = temp/10;
        }
        
        if(carry){
            ans.insert(ans.begin(),1);
        }
        return ans;
    }
};

//Method 2:

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        
        for(int i=n;i>=0;i--){
            if(digits[i]==9){
                digits[i] = 0;
            }else{
                digits[i] += 1;
                return digits;
            }
        }
        
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};
