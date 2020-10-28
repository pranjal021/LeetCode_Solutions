class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        generateSubsets(nums,ans,temp,0);
        return ans;
    }
    
private:
    
    void generateSubsets(vector<int> &nums, vector<vector<int>> &ans, vector<int> &temp, int start)     {
        
        //once we reach to the end, add it to "ans" vector
        if(start == nums.size()){
            ans.push_back(temp);
            return;
        }
        
        //for every element, we have two choice: either keep it or drop it
        //choice 1: keep it
        temp.push_back(nums[start]);
        generateSubsets(nums,ans,temp,start+1);
        
        //choice 2: drop it
        temp.pop_back();
        generateSubsets(nums,ans,temp,start+1);
        return;
    }
    
};
