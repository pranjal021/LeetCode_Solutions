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
