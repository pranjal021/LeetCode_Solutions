class Solution {
public:
    
    bool isGraphBipartite(int src,vector<int> &vis,vector<vector<int>>& graph){
        
        queue<int> q;
        q.push(src);
        
        int color = 0; //red
        bool iscycle = false;
        
        while(q.size() != 0){
            
            int s = q.size();
            
            while(s-- > 0){
                
                int f = q.front();
                q.pop();
                
                if(vis[f] != -1){
                    
                    iscycle = true;
                    
                    if(vis[f] != color)
                        return false;
                    
                    continue;
                }
                
                vis[f] = color;
                
                for(int v : graph[f]){
                    if(vis[v] == -1){
                        q.push(v);
                    }
                }                
            }
            color = (color+1)%2;
        }
        
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<int> vis(n,-1);
        
        bool res = true;
        
        for(int i=0;i<n;i++){
            if(vis[i] == -1){
                res = res && isGraphBipartite(i,vis,graph);
            }
            
        }
        
        return res;
    }
};
