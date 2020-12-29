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
    
private:
    int res=0;
    unordered_map<int,int> m;    

public:
    
    void dfs(TreeNode* root){
        if(!root) return;
        
        m[root->val]++;
        
        if(!root->left && !root->right){
            int odd = 0;
            for(auto v:m){
                if(v.second % 2 == 1) odd++;
            }
            if(odd <= 1) res++;
        }
        
        dfs(root->left);
        dfs(root->right);
        m[root->val]--;
        
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root);
        return res;
    }

};
