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
    
    bool isEqual(TreeNode* s,TreeNode* t){
        if(s == NULL || t == NULL) return s == t;
        
        return s->val == t->val 
            && isEqual(s->right,t->right) 
            && isEqual(s->left , t->left);
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        return isEqual(s,t) || (s->left && isSubtree(s->left,t))||(s->right && isSubtree(s->right,t));
        
    }
};
