// Method 1:

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        return root && (!root->left && !root->right && root->val == sum || 
                        hasPathSum(root->left, sum-root->val) || 
                        hasPathSum(root->right, sum-root->val));
        
    }
};

//Method 2:
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)return false;
        sum = sum-root->val;
        
        if(sum==0 && !root->left && !root->right) return true;
        return hasPathSum(root->left, sum) || hasPathSum(root->right,sum);
        
    }
};

//Method 3:
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)return false;
        stack<pair<TreeNode*, int>> s;
        s.push({root,root->val});
        
        while(!s.empty()){
            auto curr = s.top().first;
            int res = s.top().second;
            s.pop();
            
            if(curr->right) s.push({curr->right,res+curr->right->val});
            if(curr->left) s.push({curr->left, res+curr->left->val});
            if(!curr->left && !curr->right && res==sum)return true;
        }
        return false;
    }
};
