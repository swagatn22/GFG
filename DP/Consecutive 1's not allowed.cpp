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
	    vector<int>a(n);
	    vector<int>b(n);
	    a[0] = 1;
	    b[0] = 1;
	    for(int i = 1; i < n; i++){
	        a[i] = (a[i-1]+b[i-1])%1000000007;
	        b[i] = a[i-1];
	    }
	    cout<<(a[n-1]+b[n-1])%1000000007<<endl;
	}
	return 0;
}
