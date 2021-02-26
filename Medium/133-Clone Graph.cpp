// 1
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

//2 : bfs 
class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        if(!node){
            return NULL;
        }
        
        Node* copy = new Node(node->val);
        unordered_map<Node*, Node*> visited;
        
        queue<Node*> q;
        q.push(node);
        visited[node] = copy;
        
        while(!q.empty()){
            
            auto f = q.front();
            q.pop();
            
            for(auto nbr : f->neighbors){
                if(!visited[nbr]){
                    visited[nbr] = new Node(nbr->val);
                    q.push(nbr);
                }
                visited[f]->neighbors.push_back(visited[nbr]);
            }
        }        
        
        return visited[node];
    }
};

//3. dfs
Node* dfs_helper(Node* node, unordered_map<Node*,Node*> &v){
    
    if(!node) return node;
    
    if(v[node]) return v[node];
    
    Node* copy = new Node(node->val);
    v[node] = copy;
    
    for(auto nbr : node->neighbors){
        copy->neighbors.push_back(dfs_helper(nbr,v));
    }
    
    return copy;
}

class Solution {
public:
    Node* cloneGraph(Node* node) {
        
        if(!node) return NULL;
        
        unordered_map<Node*,Node*> v;
        return dfs_helper(node, v);
        
    }
};
