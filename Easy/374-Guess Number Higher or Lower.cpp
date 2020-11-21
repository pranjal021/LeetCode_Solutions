/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long int s = 1;
        long int e = n;
        long int ans = 0;
        
        while(s <= e){
            
            long int mid = (s+e)/2;
            long int v = guess(mid);
            
            if(v == 0){
                ans  = mid;
                break;
            }else if(v == -1){
                e = mid-1;
            }else if(v == 1){
                s = mid+1;
            }
            
        }
        
        return ans;
    }
};
