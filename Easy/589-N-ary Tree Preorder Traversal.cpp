//Method 1:

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

//Method 2: using stack

class Solution {
public:
    vector<int> preorder(Node* root) {
        if(!root) return {};
        stack<Node*> s;
        vector<int> ans;
        s.push(root);
        
        while(!s.empty()){
            Node* temp = s.top();
            s.pop();
            ans.push_back(temp->val);
            for(int i=(temp->children).size()-1;i>=0;i--){
                s.push(temp->children[i]);
            }
        }
        return ans;
    }
};
