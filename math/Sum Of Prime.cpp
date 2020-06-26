#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>prime(n+1,1);
	    prime[0] = 0;
	    prime[1] = 0;
	    for(int i = 2; i*i <= n; i++){
	        if(prime[i] == 1){
	            for(int j = i*i; j <= n; j+=i){
	                prime[j] = 0;
	            }
	        }
	    }
	    int flag = 0;
        for(int i = 2;i <= n; i++){
            if(prime[i] && prime[n-i]){
                flag = 1;
                cout<<i<<" "<<n-i<<endl;
                break;
            }
        }
        if(flag == 0)cout<<-1<<endl;
	}
	return 0;
}
