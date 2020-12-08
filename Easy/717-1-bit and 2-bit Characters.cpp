class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int i;
        for(i=0;i<n-1;){
            if(bits[i] == 0) i++;
            else if(bits[i] == 1) i=i+2;
        }
        if(i == n-1) return true;
        return false;
    }
};
