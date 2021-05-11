#include<bits/stdc++.h>
using namespace std;

vector <int> dijkstra(vector<vector<int>> g, int src, int V)
{
    vector<int>dist(V,INT_MAX);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,src});
    dist[src] = 0;
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        for(int i = 0; i < g[0].size(); i++){
            if(g[u][i] != 0){
                if(dist[i] > dist[u]+g[u][i]){
                    dist[i] = dist[u]+ g[u][i];
                    pq.push({dist[i],i});
                }
            }
        }
    }
    vector<int>res;
    for(int i = 0;i < V; i++){
        res.push_back(dist[i]);
    }
    return res;
}
//adjency list
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int>dis(V,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        dis[S] = 0;
        pq.push({0,S});
        while(!pq.empty()){
            int u = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            for(int i = 0; i < adj[u].size(); i++){
                if(dis[adj[u][i][0]] > adj[u][i][1] + d){
                    dis[adj[u][i][0]] = adj[u][i][1]+d;
                    pq.push({dis[adj[u][i][0]],adj[u][i][0]});
                }
            }
        }
        return dis;
        // Code here
    }
};
