#include<bits/stdc++.h>
using namespace std;
int solve( vector<vector<int>>&mat, int n, int m){
    if(mat[n-1][m-1] == 1) {
        return 0;
    }
    mat[0][0] = 1;
    for(int j = 1; j < m; j++){
        mat[0][j] = (mat[0][j-1] == 1 && mat[0][j] == 0) ? 1 : 0;
    }
    for(int i = 1; i < n; i++){
        mat[i][0] = (mat[i-1][0] == 1 && mat[i][0] == 0) ? 1 : 0;
    }
    for(int i = 1; i< n; i++){
        for(int j = 1; j< m; j++){
            if(mat[i][j] == 1){
                mat[i][j] = 0;
            }else{
                mat[i][j] = (mat[i-1][j]+mat[i][j-1]) % 1000000007;
            }
        }
    }
    return mat[n-1][m-1]% 1000000007;
}
int main()
 {
	int t,n,m;
	cin>>t;
	while(t--){
	    int k;
	    cin>>n>>m;
	    cin>>k;
	    int r,c;
	    vector<vector<int>>mat(n,vector<int>(m,0));
	    for(int i = 0; i< k; i++){
	        cin>>r>>c;
	        mat[r-1][c-1] = 1;
	    }
	    cout<<solve(mat,n,m)<<endl;
	}
	return 0;
}
