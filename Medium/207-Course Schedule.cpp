//bfs : 

class Solution {
    
    vector<vector<int>> buildGraph(int numCourses, vector<vector<int>>& prerequisites){
        
        vector<vector<int>> g(numCourses);
        
        for(auto v : prerequisites){
            g[v[1]].push_back(v[0]);
        }
        return g;
    }
    
    vector<int> getDegree(int numCourses, vector<vector<int>>& graph){
        
        vector<int> indegree(numCourses);
        
        for(int i = 0 ; i < numCourses ; i++){
            for(auto val : graph[i]){
                indegree[val]++;
            }
        }
        
        return indegree;
    }
    
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> graph = buildGraph(numCourses, prerequisites); //make a graph out of prerequisites list
        vector<int> indegree = getDegree(numCourses, graph); //make indegree vector
        
        queue<int> q;
        
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            
            auto f = q.front();
            q.pop();
            
            numCourses--;
            
            for(auto v : graph[f]){
                
                if(--indegree[v] == 0){
                    q.push(v);
                }
            }
            
        }
        
        return numCourses == 0; //check if all the points been covered or not!
    }
};


//dfs : 

class Solution {
public:
    
    bool dfs_helper(int src,vector<int> &vis,vector<vector<int>>& graph){
        
        vis[src] = 0;
        bool res = false;
        
        for(auto v : graph[src]){
            if(vis[v] == -1){
                res = res || dfs_helper(v,vis,graph);
            }
            else if(vis[v] == 0){
                return true;
            }
        }
        
        vis[src] = 1;
        return res;   
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<vector<int>> graph(numCourses);
        
        for(auto v : prerequisites){
            graph[v[0]].push_back(v[1]);
        }
        
        vector<int> vis(numCourses, -1);
        
        bool res = false;
        
        for(int i=0;i<numCourses;i++){
            
            if(vis[i] == -1){
                
                if(dfs_helper(i,vis,graph))
                    return false;
                
            }
            
        }
        
        return true;
    }
};
