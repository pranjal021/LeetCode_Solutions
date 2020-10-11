

297. Serialize and Deserialize Binary Tree (Hard)
Related Topic : Binary Tree

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL){
            return "NULL,";
        }
        return to_string(root->val)+","+serialize(root->left)+serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string s;
        for(int i=0;i<data.length();i++){
            if(data[i]==','){
                q.push(s);
                s="";
                continue;
            }
            s += data[i];
        }
        if(s.size()!=0)q.push(s);
        return helper_fun(q);
    }
    
    TreeNode* helper_fun(queue<string> &q){
        string s = q.front();
        q.pop();
        if(s=="NULL")return NULL;
        TreeNode* root = new TreeNode(stoi(s));
        root->left = helper_fun(q);
        root->right = helper_fun(q);
        return root;
    }
};
