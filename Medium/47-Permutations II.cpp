class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> allPermutations {};
        sort(nums.begin(), nums.end());
        int index = 0;
        do {
            allPermutations.insert(allPermutations.begin() + (index++), nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return allPermutations;
        
    }
};
