bool dfs(int v,vector<int> g[], vector<int>&visited, int parent){
    if(visited[v] == 1)
        return true;
    if(visited[v] == 0){
        visited[v] = 1;
        for(int i=0; i< g[v].size(); i++){
            if(dfs(g[v][i],g,visited,v) && g[v][i] != parent)
                return true;
        }
    }
    visited[v] = 2;
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
    vector<int>visited(V,0);
    for(int i = 0; i < V; i++){
        if(dfs(i,g,visited,-1))
            return true;
    }
    return false;
   // Your code here
   
}
