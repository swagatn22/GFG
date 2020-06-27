#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<long long int>v(n);
	    for(int i = 0; i< n; i++){
	        cin>>v[i];
	    }
	    for(int i = 0; i < n; i++){
	        v[i] = v[i]+(v[v[i]]%n)*n;
	    }
	    for(int i = 0; i< n; i++){
	        v[i] = v[i]/n;
	    }
	    for(int i = 0; i < n; i++){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
