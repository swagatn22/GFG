#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	int m;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    cin>>m;
	    sort(vec.begin(),vec.end());
	    int ans = INT_MAX;
	    for(int i = 0; i <= n-m; i++){
	        ans = min(ans,vec[i+m-1]-vec[i]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
