/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */

//Method 1:

class NumArray {
public:
    
    vector<int> arr;
    NumArray(vector<int>& nums) {
        arr = nums;
    }
    
    int sumRange(int i, int j) {
        
        int sum = 0;
        for(int k=i;k<=j;k++){
            sum += arr[k];
        }
        return sum;
    }
};

//Method 2:

class NumArray {
public:
    
    vector<int> arr;
    
    NumArray(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            if(i == 0){
                arr.push_back(nums[0]);
            }else{
                arr.push_back(arr[arr.size()-1] + nums[i]);
            }
        }
        
    }
    
    int sumRange(int i, int j) {
        
        return arr[j] - (i-1>=0 ? arr[i-1] : 0);
        
    }
};
