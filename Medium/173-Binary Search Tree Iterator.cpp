class BSTIterator {
private:
    queue<int> temp;
    
public:
    BSTIterator(TreeNode* root) {
        dfs_inorder(root, temp);
    }
    
    void dfs_inorder(TreeNode* root, queue<int>& que){
        if(!root) return;
        
        dfs_inorder(root->left, que);
        que.push(root->val);
        dfs_inorder(root->right, que);
        
    }
    
    /** @return the next smallest number */
    int next() {
        int result = temp.front();
        temp.pop();
        return result;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return temp.size() > 0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
