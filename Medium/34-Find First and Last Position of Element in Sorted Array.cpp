// Method 1: 
// Time complexity : O(n);  

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;
        
        for(int i=0;i<nums.size();i++){
            if(target != nums[i])
                continue;
            if(first == -1){
                first = i;
            }
            last = i;
        }
        
        vector<int> ans(2,-1);
        ans[0] = first;
        ans[1] = last;
        return ans;
    }
};

//Method 2:
// Time complexity : O(logn);

class Solution {
public:
    
    int getFirstOcc(vector<int> nums,int s,int e,int x,int n){
        
        if(e>=s){
            
            int mid = s + (e-s)/2;
            
            if((mid == 0 || x > nums[mid-1]) && nums[mid]==x)
                return mid;
            
            else if(x > nums[mid])
                return getFirstOcc(nums,mid+1,e,x,n);
            
            else
                return getFirstOcc(nums,s,mid-1,x,n);
            
        }
        return -1;
    }
    
    int getLastOcc(vector<int> nums,int s,int e,int x,int n){
        
        if(e>=s){
            
            int mid = s + (e-s)/2;
            
            if((mid == n-1 || x < nums[mid+1]) && nums[mid] == x)
                return mid;
            
            else if(x < nums[mid])
                return getLastOcc(nums,s,mid-1,x,n);
            
            else
                return getLastOcc(nums,mid+1,e,x,n);
            
        }
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        
        int n = nums.size();
        
        int first = getFirstOcc(nums,0,n-1,target,n);
        int last = getLastOcc(nums,0,n-1,target,n);
        
        ans[0] = first;
        ans[1] = last;
        
        return ans;
    }
};
