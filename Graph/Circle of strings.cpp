//DFS
#include<bits/stdc++.h>
using namespace std;
int dfs(vector<int>graph[],int n,int src,int dest,vector<int>&visit,int count){
    if(visit[src] == 0){
        visit[src] = 1;
    }
    for(int i = 0; i < graph[src].size(); i++){
        if(dest == graph[src][i] && count == n-1){
            return 1;
        }
        if(!visit[graph[src][i]] && dfs(graph,n,graph[src][i],dest,visit,count+1)){
            return 1;
        }
    }
    return 0;
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<string>v(n);
	    for(int i = 0; i< n; i++){
	        cin>>v[i];
	    }
	    vector<int>graph[26];
	    vector<int>node(26,0);
	    for(int i = 0; i < n; i++){
	        node[v[i][0]-'a']++;
	        graph[v[i][0]-'a'].push_back(v[i][v[i].length()-1]-'a');
	    }
	    int m = 0;
	    for(int i = 0; i < 26; i++){
	        if(node[i]){
	            m++;
	        }
	    }
	    int count = 0;
	    int flag = 0;
	    vector<int>visit(26,0);
	    for(int i = 0; i < 26; i++){
	        if(node[i] != 0){
	            if(dfs(graph,m,i,i,visit,count)){
	                flag = 1;
	                break;
	            }
	        }
	    }
	    cout<<flag<<endl;
	}
	return 0;
}
//BFS
#include <bits/stdc++.h>
    using namespace std;
     
    int main() {
    	int t;
    	cin >> t;
    	while(t--){
    	    int n;
    	    cin >> n;
    	    vector<string> arr(n);
    	    for(string& s : arr) cin >> s;
    	    vector<vector<int>> edge(n,vector<int>());
    	    for(int i=0;i<n;i++){
    	        for(int j=0;j<n;j++){
    	            if(i != j){
    	                if(arr[i][arr[i].size()-1] == arr[j][0])
    	                    edge[i].push_back(j);
    	            }
    	        }
    	    }
     
    	    vector<int> visited(n,0);
    	    queue<int> q;
    	    q.push(0);
    	    visited[0] = 1;
    	    int last = 0;
    	    while(!q.empty()){
    	        int cur = q.front();
    	        q.pop();
    	        for(int j : edge[cur]){
    	            if(!visited[j]){
    	                q.push(j);
    	                visited[j] = 1;
    	            }
     
    	        }
    	        if(q.size() == 0)
    	            last = cur;
    	    }
    	    bool ok = true;
    	    for(int i=0;i<n;i++)
    	        if(!visited[i]) ok = false;
    	    if(arr[last][arr[last].size()-1] != arr[0][0]) ok = false;
     
    	    cout << ok << endl;
    	}
    }
