// dfs :

class Solution {
public:
    
    bool dfs_helper(int src,vector<vector<int>> &graph,vector<int> &ans,vector<int> &vis){
        
        vis[src] = 0;
        bool res = false;
        
        for(auto v : graph[src]){
            if(vis[v] == -1){
                res = res || dfs_helper(v,graph,ans,vis);
            }else if(vis[v] == 0){
                return true;
            }
        }
        
        ans.push_back(src);
        vis[src] = 1;
        
        return res;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> graph(numCourses);
        
        for(auto v : prerequisites){
            graph[v[0]].push_back(v[1]);
        }
        
        vector<int> vis(numCourses, -1);
        
        bool res = false;
        
        vector<int> ans;
        
        for(int i=0;i<numCourses;i++){
            if(vis[i] == -1){
                res = res || dfs_helper(i,graph,ans,vis);
            }
        }
        
        if(res){
            ans.clear();
        }
        
        return ans;
    }
};


