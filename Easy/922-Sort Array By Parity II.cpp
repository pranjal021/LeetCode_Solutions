//Method 1:

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        int i = 0;
        int n = A.size();
        int j = 1;
        
        while(i<n && j<n){
            if(A[i]%2 != 0 && A[j]%2 == 0){
                swap(A[i],A[j]);
                i += 2;
                j += 2;
                continue;
            }
            
            if(A[i]%2 == 0) i += 2;
            
            if(A[j]%2 != 0) j += 2;
        }
        return A;
    }
};

//Method 2:

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        int i = 0;
        int n = A.size();
        int j = 1;
        
        while(1){
            
            while(i<n && A[i]%2 == 0) i+=2;
            while(j<n && A[j]%2 != 0) j+=2;
            
            if(i<n && j<n){
                swap(A[i],A[j]);
            }else{
                break;
            }
            
        }
        return A;
    }
};
