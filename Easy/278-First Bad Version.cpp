// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long int s = 1;
        long int e = n;
        
        while(s<=e){
            long int mid = (s+e)/2;
            if(!isBadVersion(mid)){
                s = mid+1;
            }else
                e = mid-1;
        }
        
        return e+1;
    }
};
