class Solution {
public:
    vector<int> ans;
    
    vector<int> preorder(Node* root) {
        
        if(root == NULL) return ans;
        ans.push_back(root->val);
        
        vector<Node*> c = root->children;
        for(auto x:c){
            preorder(x);
        }
        
        return ans;
    }
};
