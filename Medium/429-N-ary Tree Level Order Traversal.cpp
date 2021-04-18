class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(q.size() > 0){
            int current_size = q.size();
            
            vector<int> v;
            while(current_size-- > 0){
                auto node = q.front();
                q.pop();
                v.push_back(node->val);
                
                for(Node* child: node->children){
                    q.push(child);
                }
                
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};
