#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n][n];
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            cin>>a[i][j];
	        }
	    }
	    map<int,vector<int>>m;
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            m[i+j].push_back(a[i][j]);
	        }
	    }
	    for(auto it = m.begin(); it != m.end(); it++){
	        int m = it->second.size();
	        for(int i = 0; i < m; i++){
	            cout<<it->second[i]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
