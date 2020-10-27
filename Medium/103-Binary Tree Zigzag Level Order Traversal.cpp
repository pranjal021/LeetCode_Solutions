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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(!root)
            return ans;
        
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            
            pair<TreeNode*,int> a = q.front();
            TreeNode* node = a.first;
            int level = a.second;
            
            if(level >= ans.size()){
                ans.push_back({});
            }
            
            ans[level].push_back(node->val);
            q.pop();
            
            if(node->left){
                q.push({node->left,level+1});
            }
            if(node->right){
                q.push({node->right,level+1});
            }
            
        }
        
        for(int i=0;i<ans.size();i++){
            if(i%2){
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        
        return ans;
        
    }
};
