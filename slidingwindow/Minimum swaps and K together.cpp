#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    int k;
	    cin>>k;
	    int count = 0;
	    for(int i = 0; i < n; i++){
	        if(v[i] <= k){
	            count++;
	        }
	    }
	    int j = 0;
	    int ans = 0;
	    int res = INT_MAX;
	    for(int i = 0; i <= n-count; i++){
	        int len = count;
	        j = i;
	        ans = 0;
	        while(len != 0){
	            if(v[j] > k){
	                 ans++;
	            }
	            len--;
	            j++;
	        }
	        if(ans < res){
	            res = ans;
	        }
	    }
	    cout<<res<<endl;
	}
	return 0;
}
