class Solution {
public:
    
    vector<int> find(vector<int> &arr){
        
        stack<int> s;
        vector<int> ans(arr.size(),0);
        
        for(int i = arr.size() - 1 ; i >= 0 ; i--){
            while(s.size() > 0 && s.top() < arr[i]) s.pop();
            ans[i] = s.size() > 0 ? s.top() : -1;
            s.push(arr[i]);
        }
        
        return ans;
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nge = find(nums2);
        
        unordered_map<int,int> m;
        
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]] = nge[i];
        }
        
        vector<int> ans(nums1.size());
        
        for(int i=0;i<nums1.size();i++){
            ans[i] = m[nums1[i]];
        }
        
        return ans;
    }
};

