#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<vector<int>>mat(n,vector<int>(n));
	    for(int i = 0; i< n; i++){
	        for(int j = 0; j < n; j++){
	            cin>>mat[i][j];
	        }
	    }
	    for(int i = 0; i< n-1; i++){
	        for(int j = i+1; j < n; j++){
	            swap(mat[i][j],mat[j][i]);
	        }
	    }
	    for(int i = 0; i< n; i++){
	        for(int j = 0, k = n-1; j < k; k--,j++){
	            swap(mat[i][j],mat[i][k]);
	        }
	    }
	    for(int i = 0; i< n; i++){
	        for(int j = 0; j < n; j++){
	            cout<<mat[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
