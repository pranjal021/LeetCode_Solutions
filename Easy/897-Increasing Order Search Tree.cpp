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
    
    void insert(TreeNode* &head,TreeNode* &tail,int val){
        if(head==NULL){
            head = tail = new TreeNode(val);
            return;
        }
        tail->right = new TreeNode(val);
        tail = tail->right;
    }
    
    void helper(TreeNode* p,TreeNode* &head,TreeNode* &tail){
        if(p==NULL) return;
        helper(p->left,head,tail);
        insert(head,tail,p->val);
        helper(p->right,head,tail);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* head = 0,*tail =0;
        helper(root,head,tail);
        return head;
    }
};
