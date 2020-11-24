/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    unordered_map<int,int> m;
    
    void dfs(TreeNode* root){
        if(root){
            dfs(root->left);
            m[root->val]++;
            dfs(root->right);
        }
    }
    
    vector<int> findMode(TreeNode* root) {
        
        dfs(root);
        vector<int> res;
        
        int currMax = INT_MIN;
        
        for(auto& [key,value] : m){
            
            if(value == currMax){
                res.push_back(key);
            }else if(value > currMax){
                currMax = value;
                res.clear();
                res.push_back(key);
            }
            
        }
        
        return res;
    }
};
