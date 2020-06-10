#include <bits/stdc++.h>
using namespace std;
void dfs(int color,int newcolor,int i,int j,int n,int m,vector<vector<int>>&vec){
    if(i < 0 ||  i >= n || j < 0 || j >= m )
        return;
    if(vec[i][j] == color){
        vec[i][j] = newcolor;
        dfs(color,newcolor,i+1,j,n,m,vec);
        dfs(color,newcolor,i-1,j,n,m,vec);
        dfs(color,newcolor,i,j+1,n,m,vec);
        dfs(color,newcolor,i,j-1,n,m,vec);
    }
}
int main() {
	//code
	int t;
	int n,m;
	int x,y;
	int newcolor;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    vector<vector<int>>vec(n,vector<int>(m));
	    for(int i = 0;i<n; i++){
	        for(int j =0; j < m; j++){
	            cin>>vec[i][j];
	        }
	    }
	    cin>>x>>y;
	    cin>>newcolor;
	    dfs(vec[x][y],newcolor,x,y,n,m,vec);
	    for(int i = 0;i<n; i++){
	        for(int j = 0; j < m; j++){
	            cout<<vec[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
