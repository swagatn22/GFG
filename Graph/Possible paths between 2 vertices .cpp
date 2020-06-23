#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>graph[],int src,int dest,vector<int>&visit, int &count){
    visit[src] = 1;
    if(src == dest){
        count++;
    }
    for(int i = 0; i < graph[src].size(); i++){
        if(!visit[graph[src][i]]){
            dfs(graph,graph[src][i],dest,visit,count);
        }
    }
    visit[src] = 0;
}
int main()
 {
	//code
	int n,t,u,v;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>graph[n];
	    int e;
	    cin>>e;
	    for(int i = 0; i < e; i++){
	        cin>>u;
	        cin>>v;
	        graph[u-1].push_back(v-1);
	    }
	    int src,dest;
	    cin>>src;
	    cin>>dest;
	    int ans = 0;
	    vector<int>visit(n,0);
	    dfs(graph,src-1,dest-1,visit,ans);
	    cout<<ans<<endl;
	}
	return 0;
}
