    bool iscycle(int s,vector<int>adj[],vector<int>visited){
        if(visited[s] == 1) return true;
        visited[s] = 1;
        for(int i = 0; i < adj[s].size(); i++){
            if(iscycle(adj[s][i],adj,visited))
                return true;
        }
        visited[s] = 2;
        return false;
    }
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	    vector<int>adj[N];
	    for(int i = 0; i < pre.size(); i++){
            adj[pre[i].second].push_back(pre[i].first);
        }
        vector<int>visited(N,0);
        for(int i = 0; i < N; i++){
            if(iscycle(i,adj,visited))
                return false;
        }
     return true;   
	}
