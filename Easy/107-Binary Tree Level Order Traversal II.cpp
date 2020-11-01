//Method 1:

class Solution {
private:
    
    int getHeight(TreeNode* root){
        if(root==NULL)return 0;
        
        int l = getHeight(root->left);
        int r = getHeight(root->right);
        
        return max(l,r)+1;   
    }
    
    void getValues(TreeNode* root,int level,int curr,vector<int> &v){
        if(root==NULL)return;
        
        if(curr==level){
            v.push_back(root->val);
        }
        
        getValues(root->left,level,curr+1,v);
        getValues(root->right,level,curr+1,v);
        return;
    }
    
public:
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(!root)return ans;
        
        int h = getHeight(root);
        
        for(int level=h-1;level>=0;level--){
            vector<int> v;
            getValues(root,level,0,v);
            ans.push_back(v);
        }
        
        return ans;
    }
};

//Method 2: Using queue

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> v;
        
        if(!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            auto temp = q.front();
            q.pop();
            
            if(temp == NULL){
                
                ans.push_back(v);
                v.clear();
                
                if(q.empty()){
                    
                    reverse(ans.begin(),ans.end());
                    return ans;
                    
                }else{
                    
                    q.push(NULL);
                    
                }
            
            }else{
                
                v.push_back(temp->val);
                
                if(temp->left)
                    q.push(temp->left);
                
                if(temp->right)
                    q.push(temp->right);
                
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
