void dfsTraverse(int v,vector<int> g[],vector<int>&visited, vector<int>&res){
        visited[v] = 1;
        res.push_back(v);
        for(auto it = g[v].begin(); it != g[v].end(); ++it){
            if(!visited [*it]){
              dfsTraverse(*it,g,visited,res);  
            }
        }
}
vector <int> dfs(vector<int> g[], int N)
{
    vector<int>visited(N,0);
    vector<int>res;
    dfsTraverse(0,g,visited,res);
    return res;
}
