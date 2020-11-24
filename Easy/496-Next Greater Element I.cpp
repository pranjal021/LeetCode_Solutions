class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        unordered_map<int,int> m;
        
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]] = i;
        }
        
        for(int i=0;i<nums1.size();i++){
            int curr = -1;
            int j = m[nums1[i]] + 1;
            
            for(; j < nums2.size() ; j++){
                if(nums2[j] > nums1[i]){
                    curr = nums2[j];
                    break;
                }
            }
            
            res.push_back(curr);
        }
        
        return res;
    }
};
