#include <bits/stdc++.h>
using namespace std;
int isvalid(int i, int j, int m, int n){
    if(i < 0 || i >= m || j < 0 || j >= n){
        return 0;
    }
    return 1;
}
int bfs(vector<vector<int>>&mat,int m, int n){
    vector<vector<int>>visit(m,vector<int>(n,0));
    queue<pair<int,int>>q;
    for(int i = 0; i< m; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 2){
                q.push({i,j});
            }
        }
	}
	q.push({-1,-1});
	int dx[] = {-1,0,0,1};
	int dy[] = {0,1,-1,0}; 
	int steps = 0;
	while(!q.empty()){
	    int size = q.size();
	    for(int i = 0; i < size; i++){
	        pair<int,int> v = q.front();
	        q.pop();
	        int r = v.first;
	        int c = v.second;
	        if(r == -1 && c == -1 && !q.empty()){
	            steps++;
	            q.push({-1,-1});
	            break;
	        }
	        for(int i = 0; i < 4; i++){
	            int x = r + dx[i];
	            int y = c + dy[i];
	            if(isvalid(x,y,m,n) && visit[x][y] == 0 &&mat[x][y] == 1){
	                q.push({x,y});
	                visit[x][y] = 1;
	                mat[x][y] = 2;
	            }
	        }
	    }
	}
	for(int i = 0; i< m; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] == 1){
                return -1;
            }
        }
	}
	return steps;
}
int main() {
	//code
	int t;
	cin>>t;
	int m,n;
	while(t--){
	    cin>>m>>n;
	    vector<vector<int>>mat(m,vector<int>(n));
	    for(int i = 0; i< m; i++){
	        for(int j = 0; j < n; j++){
	            cin>>mat[i][j];
	        }
	    }
	    cout<<bfs(mat,m,n)<<endl;
	    
	}
	return 0;
}
