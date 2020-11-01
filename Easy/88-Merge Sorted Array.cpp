//Method 1:

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> result(m+n);
        int i=0,k=0,j=0;
        
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                result[k++] = nums1[i++];
            }else{
                result[k++] = nums2[j++];
            }
        }
        
        while(i<m){
            result[k++] = nums1[i++];
        }
        
        while(j<n){
            result[k++] = nums2[j++];
        }
        
        
        for(int i=0;i<m+n;i++){
            nums1[i] = result[i];
        }
        return;
    }
};

//Method 2:

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = m+n-1;
        
        while(i>=0 && j>=0){
            
            if(nums1[i] <= nums2[j]){
                nums1[k--] = nums2[j--];
            }else{
                nums1[k--] = nums1[i--];
            }
            
        }
        
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
        
        return;
    }
};
