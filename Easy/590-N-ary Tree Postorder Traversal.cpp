/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if(!root)return {};
        stack<Node*> s;
        s.push(root);
        vector<int> ans;
        
        while(!s.empty()){
            Node* n = s.top();
            s.pop();
            ans.push_back(n->val);
            for(int i=0; i<n->children.size(); i++){
                s.push(n->children[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
