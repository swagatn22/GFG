vector <int> bfs(vector<int> g[], int N) {
    vector<int>visited(N,0);
    queue<int>q;
    q.push(0);
    visited[0] = 1;
    vector<int>res;
    while(!q.empty()){
        int v = q.front();
        res.push_back(v);
        q.pop();
        for(int i = 0; i < g[v].size(); i++){
            if(!visited[g[v][i]]){
                visited[g[v][i]] = 1;
                q.push(g[v][i]);
            }
        }
    }
    return res;
}
