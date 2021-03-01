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

//bfs:

class Solution {
public:
    
    vector<int> getDegree(int n, vector<vector<int>>& graph){
        
        vector<int> indegree(n);
        
        for(int i=0;i<n;i++){
            for(auto val : graph[i]){
                indegree[val]++;
            }
        }
        
        return indegree;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        //graph
        vector<vector<int>> graph(numCourses);
        
        for(auto v : prerequisites){
            graph[v[0]].push_back(v[1]);
        }
        //indegree
        vector<int> indegree = getDegree(numCourses,graph);
        
        vector<int> ans;
        queue<int> q;
        
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            
            ans.push_back(f);
            
            for(auto v : graph[f]){
                if(--indegree[v] == 0){
                    q.push(v);
                }
            }
            
        }
        
        if(ans.size() == numCourses){
            reverse(ans.begin(), ans.end());
        }else{
            ans.clear();
        }
        
        return ans;
    }
};
