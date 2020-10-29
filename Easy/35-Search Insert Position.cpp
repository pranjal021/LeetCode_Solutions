//Method 1:

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int index = -1;
        
        //lets first find the index of target value in "nums" array 
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                index = i;
                break;
            }
        }
        
        if(index != -1)
            return index;
        
        //if index not found, then calculate it
        for(int i=0;i<nums.size();i++){
            if(target < nums[i]){
                index = i;
                break;
            }
        }
        
        //It must be inserted in the last!!
        if(index == -1){
            index = nums.size();
        }
        
        return index;
    }
};

//Method 2:

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low  = 0;
        int high = nums.size()-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        
        return low;
    }
};
