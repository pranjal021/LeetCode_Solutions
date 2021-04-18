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
    
    int maxLevelSum(TreeNode* root) {
        
        if(root == NULL) return 0;
        
        int level = 1;
        int ans = -1;
        int max_val = INT_MIN;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size() > 0){
            
            int s = q.size();
            int sum = 0;
            
            while(s-- > 0){
                auto f = q.front();
                q.pop();
                
                sum += f->val;
                
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            
            if(sum > max_val){
                max_val = sum;
                ans = level;
            }
            
            level++;
        }
        
        return ans;
    }
};
