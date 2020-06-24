#include <bits/stdc++.h>
using namespace std;
int dfs(int i, int j, int n,vector<vector<int>>&vec){
    if(i < 0 || i >= n || j < 0 || j >= n || vec[i][j]== 0 || vec[i][j] == 4) {
        return 0;
    }
    if(vec[i][j] == 2){
        return 1;
    }
    vec[i][j] = 4;
    return(dfs(i+1,j,n,vec)||dfs(i-1,j,n,vec)||dfs(i,j-1,n,vec)
            ||dfs(i,j+1,n,vec));
}

int main() {
	//code
	int n,t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>n;
	    vector<vector<int>>vec(n,vector<int>(n));
	    for(int i = 0;i < n; i++){
	        for(int j = 0; j < n; j++){
	            cin>>vec[i][j];
	            if(vec[i][j] == 1){
	                x = i;
	                y = j;
	            }
	        }
	    }
	    for(int i = 0;i < n; i++){
	        for(int j = 0; j < n; j++){
	            if(vec[i][j] == 1){
	                x = i;
	                y = j;
	                break;
	            }
	        }
	    }
	    cout<<dfs(x,y,n,vec)<<endl;
	}
	return 0;
}
