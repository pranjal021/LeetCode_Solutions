class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      
        int l1 = nums1.size();
        int l2 = nums2.size();
        vector<int> res(l1+l2);
        int i=0,j=0,k=0;
        
        while(i!=l1 && j!=l2){
            if(nums1[i]>=nums2[j]){
                res[k++] = nums2[j++];
            }else{
                res[k++] = nums1[i++];
            }
        }
        
        while(i!=l1){
            res[k++] = nums1[i++];
        }
        while(j!=l2){
            res[k++] = nums2[j++];
        }

        if(res.size() % 2){
           
            return res[(res.size()/2)];
            
        }
        
        return (res[(res.size()/2)] + res[(res.size()/2) - 1]) / 2.0;
    
    }
};
