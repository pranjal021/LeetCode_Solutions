
class Solution {
public:
    
    Node* helper(Node* node,unordered_map<Node*,Node*> &m){
        if(node==NULL)return NULL;
        
        Node* new_node = new Node(node->val);
        m[node] = new_node;
        
        for(auto n:node->neighbors){
            
            if(!m.count(n)){
                Node* y = helper(n,m);
                (new_node->neighbors).push_back(y);
            }else{
                (new_node->neighbors).push_back(m[n]);
            }
            
        }
        
        return new_node;
        
    }
    
    Node* cloneGraph(Node* node) {
        
        unordered_map<Node*,Node*> m;
        return helper(node,m);
        
    }
};
