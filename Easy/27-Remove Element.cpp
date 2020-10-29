//Method 1:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int p1 = 0;
        int p2 = nums.size()-1;
        int count = 0;
        
        while(p1<=p2){
            
            if(nums[p1] == val){
                swap(nums[p1],nums[p2]);
                p2--;
                count++;
            }else{
                p1++;
            }
            
        }
        
        return nums.size()-count;
    }
};

//Method 2:

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)return 0;
        
        int ans=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != val) nums[j++]=nums[i], ans++;
        }
        
        return ans;
    }
};
