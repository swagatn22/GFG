#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    int prime[n+1];
	    memset(prime,1,sizeof(prime));
	    prime[0] = 0;
	    prime[1] = 0;
	    for(int i = 2; i*i <= n; i++){
	        if(prime[i]){
	            for(int j = i*i; j <= n; j+=i){
	                prime[j] = 0;
	            }
	        }
	    }
	    for(int i = m; i <= n; i++){
	        if(prime[i]){
	            cout<<i<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
