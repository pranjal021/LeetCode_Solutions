class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length() != B.length()) return false;
        
        A += A;
        
        size_t found = A.find(B);
        
        if(found != string::npos){
            return true;
        }
        return false;
    }
};
