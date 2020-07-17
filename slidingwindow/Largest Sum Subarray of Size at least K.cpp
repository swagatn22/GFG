#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    cin>>k;
	    int ans = 0;
	    int max_sum[n];
	    int curr_sum  = 0;
	    for(int i = 0; i < n; i++){
	        curr_sum = max(v[i],v[i]+curr_sum);
	        max_sum[i] = curr_sum;
	    }
	    int sum = 0;
	    for(int i = 0; i < k; i++){
	        sum += v[i];
	    }
	    ans = sum;
	    for(int i = k; i< n; i++){
	        sum = sum + v[i] - v[i-k];
	        ans = max(ans,sum);
	        ans = max(ans,sum + max_sum[i-k]);
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
