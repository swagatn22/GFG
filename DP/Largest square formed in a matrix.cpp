#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int mat[n][m];
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < m; j++){
	            cin>>mat[i][j];
	        }
	    }
	    int ans = 1;
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < m; j++){
	            if(i > 0  && j > 0){
	                if(mat[i][j] == 1){
	                    mat[i][j] = 1+ 
	                    min(mat[i-1][j],min(mat[i-1][j-1],mat[i][j-1]));
	                    ans = max(ans,mat[i][j]);
	                }
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
