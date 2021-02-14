class Solution {
public:
    
    bool dfs_helper(int v,vector<int> &visited,int src,vector<vector<int>>& graph){
        queue<pair<int,int>> q;
        
        q.push(make_pair(src,0));
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            
            if(visited[node.first] != -1){
                if(node.second != visited[node.first]){
                    return false;
                }
            }else{
                visited[node.first] = node.second;
            }
            
            if(graph[node.first].size() == 0){
                continue;
            }
            
            for(auto nbr : graph[node.first]){
                if(visited[nbr] == -1){
                    q.push(make_pair(nbr, node.second+1));
                }
            }
            
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int v = graph.size();
        vector<int> visited(v,-1);
        
        for(int i=0;i<v;i++){
            if(visited[i] == -1){
                bool ans = dfs_helper(v,visited,i,graph);
                if(ans == false){
                    return false;
                }
            }
        }
        return true;
        
        
    }
};
