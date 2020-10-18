class Solution {
public:
    
    int find(vector<int> &nums,int s,int e,int target){
        
        if(s>e)return -1;
        
        int mid = (s+e)/2;
        
        if(nums[mid]==target)return mid;
        
        //check if left array is sorted or not
        if(nums[s]<=nums[mid]){
            
            //left array is sorted
            //find the target element in left sorted array
            if(target >= nums[s] && target<= nums[mid])
                //target lies in left sorted array
                return find(nums,s,mid-1,target);
            else
                return find(nums,mid+1,e,target);
            
        }
        //left array is not sorted implies right array is sorted
        else{
            
            if(target >= nums[mid] && target <= nums[e])
                return find(nums,mid+1,e,target);
            else
                return find(nums,s,mid-1,target);
            
        }
   
    }
    
    int search(vector<int>& nums, int target) {
        
        if(nums.size()==0)return -1;
        
        return find(nums,0,nums.size()-1,target);
       
    }
};