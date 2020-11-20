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
    
    void printNodes(TreeNode* root,string ans,vector<string> &res){
        
        if(root==NULL) return;
        
        ans += to_string(root->val) + "->";
        
        if(root->left == NULL && root->right == NULL){
            ans.erase(ans.length()-2,2);
            res.push_back(ans);
        }
        
        printNodes(root->left,ans,res);
        printNodes(root->right,ans,res);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> res;
        string ans;
        printNodes(root,ans,res);
        return res;
        
    }
};
