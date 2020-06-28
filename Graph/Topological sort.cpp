void toposortUntil(int v,vector<int>adj[],vector<int>&visited, stack<int>&res){
    visited[v] = 1;
    for(int i = 0; i < adj[v].size(); i++){
        if(!visited[adj[v][i]]){
            toposortUntil(adj[v][i],adj,visited,res);
        }
    }
    res.push(v);
}
int* topoSort(int V, vector<int> adj[]) {
    vector<int>visited(V,0);
    stack<int>res;
    for(int i = 0; i < V; i++){
        if(!visited[i]){
            toposortUntil(i,adj,visited,res);
        }
    }
   int *arr = ((int*)malloc(sizeof(int)*V));
   int j = 0;
   while(!res.empty()){
        arr[j] = res.top();
        j++;
        res.pop();
    }
    return arr;
    // Your code here
}
