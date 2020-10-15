class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        for(int i=0;i<gcd(n,k);i++){
            int prev = i, next = (prev+k)%n;
            int temp = nums[i];
            while(next != i){
                int temp2 = nums[next];
                nums[next] = temp;
                temp = temp2;
                prev = next;
                next = (prev+k)%n;
            }
            nums[next] = temp;
        }
    }
};