//Method 1: using extra space

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;
        for(int i=0;i<s.length();i++){
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};

//Method 2: inplace

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i= 0;
        while(i!=indices.size()){
            if(i == indices[i]) i++;
            else{
                swap(s[i],s[indices[i]]);
                swap(indices[i], indices[indices[i]]);
            }
        }
        return s;
    }
};
