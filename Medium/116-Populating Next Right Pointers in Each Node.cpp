// Method 1:
class Solution {
public:
    
    void solve(Node* l,Node* r){
        
        if(l==NULL || r==NULL)
            return;
        
        l->next = r;
        
        solve(l->left,l->right);
        solve(l->right,r->left);
        solve(r->left,r->right);
        
    }
    
    Node* connect(Node* root) {
        if(root == NULL)
            return NULL;
        
        if(root->left == NULL)return root;
        
        solve(root->left, root->right);
        return root;
    }
};

//Method 2:

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)return NULL;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size = q.size();
            
            while(size--){
                auto temp = q.front();
                q.pop();
                
                if(temp->left){
                    temp->left->next = temp->right;
                    
                    q.push(temp->left);
                }
                
                if(temp->right){
                    if(temp->next){
                        temp->right->next = temp->next->left;
                    }
                    
                    q.push(temp->right);
                }  
            }
        }
        
        return root;
    }
};
