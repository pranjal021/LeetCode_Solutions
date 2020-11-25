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
    
    vector<int> n;
    
    void dfs(TreeNode* root){
        if(root){
            dfs(root->left);
            n.push_back(root->val);
            dfs(root->right);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        dfs(root);
        unordered_map<int,int> m;
        
        for(int i=0;i<n.size();i++){
            
            if(m.count(k-n[i]) != 0) return true;
            m[n[i]]++;
            
        }
        
        return false;
    }
};
