bool dfs(int v,vector<int> adj[], vector<int>&visited){
    if(visited[v] == 1){
       return true; 
    }
    if(visited[v] == 0){
        visited[v] = 1;
        for(int i = 0; i < adj[v].size(); i++){
            if(dfs(adj[v][i],adj,visited)){
                return true;
            }
        }
    }
    visited[v] = 2;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    vector<int>visited(V,0);
    for(int i = 0; i < V; i++){
        if(!visited[i])
            if(dfs(i,adj,visited))
                return true;
    }
    return false;
    // Your code here
}
