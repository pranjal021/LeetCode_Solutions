// METHOD 1: 
//Time Complexity: O(N), where N is the number of nodes in the tree.
//Space Complexity: O(H), where H is the height of the tree. i.e. O(1)

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        int rangesum(0);
        stack<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            TreeNode* node = s.top(); s.pop();
            if(node->val >=L && node->val <=R) rangesum += node->val;
            if(node->left) s.push(node->left);
            if(node->right) s.push(node->right);
        }
        return rangesum;
    }
};

// METHOD 2: 
//Time Complexity O(n) & Space Complexity O(n)

class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==NULL)return 0;
        
        return ((root->val >=L && root->val <=R)? root->val :0) + rangeSumBST(root->left,L,R) + rangeSumBST(root->right,L,R);
        
    }
};

// METHOD 3:
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root==NULL)return 0;;
        
        return ((root->val >= L && root->val <=R) ? (root->val + rangeSumBST(root->left,L,R) + rangeSumBST(root->right, L, R)) : 
            (root->val <L) ? rangeSumBST(root->right,L,R) : rangeSumBST(root->left,L,R));
    }
};

