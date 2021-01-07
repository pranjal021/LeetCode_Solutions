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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>> res;
        vector<int> v;
        
        dfs(res,v,root,sum);
        return res;
        
    }
    
    void dfs(vector<vector<int>> &res,vector<int> v,TreeNode* root,int sum){
        if(root == NULL) return ;
        
        v.push_back(root->val);
        if(root->val == sum && root->left ==NULL && root->right==NULL){
            res.push_back(v);
            return;
        }
        
        dfs(res,v,root->left,sum-root->val);
        dfs(res,v,root->right, sum - root->val);
    }
};
