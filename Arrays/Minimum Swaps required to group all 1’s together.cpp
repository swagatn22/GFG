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
	    int count = 0;
	    int res = INT_MAX;
	    for(int i = 0; i < n; i++){
	        if(v[i] == 1){
	            count++;
	        }
	    }
	    int c = 0;
	    int j;
	    int ans;
	    for(int i = 0; i <=n-count; i++){
	        c = count;
	        ans = 0;
	        int j = i;
	        while(c != 0){
	            if(v[j++] == 0){
	                ans++;
	            }
	            c--;
	        }
	        res = min(ans,res);
	    }
	    count == 0 ? cout<<-1<<endl:cout<<res<<endl;
	}
	return 0;
}
