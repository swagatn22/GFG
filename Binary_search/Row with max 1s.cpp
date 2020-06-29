#include <bits/stdc++.h>
using namespace std;
int findRow(int m, int n, vector<vector<int>>mat){
    int row = 0;
    int i = 0;
    int j = n - 1;
    while(i < m && j >= 0){
        if(mat[i][j] == 1){
            row = i;
            j--;
        }
        else i++;
    }
    return row;
}

int main() {
	int t, m, n;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    vector<vector<int>>mat(m,vector<int>(n));
	    for(int i = 0; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cin>>mat[i][j];
	        } 
	    }
	   cout<<findRow(m, n,mat)<<endl;
	}
	return 0;
}
