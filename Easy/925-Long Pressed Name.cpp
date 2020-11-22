class Solution {
public:
    
    bool isLongPressedName(string name, string typed) {
        int j=0;
        for(int i=0;i<typed.length();i++){
            if(name[j] == typed[i])
                j++;
            else if((i==0 && name[j]!=typed[i]) || (j > 0 && name[j-1] != typed[i]))
                return false;
        }
        
        return j == name.length();
    }

};

