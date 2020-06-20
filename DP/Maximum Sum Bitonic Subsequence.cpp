#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    vector<int>lis(n);
	    vector<int>ris(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	        lis[i] = vec[i];
	        ris[i] = vec[i];
	    }
	    for(int i = 1; i < n; i++){
	        for(int j = 0; j < i; j++){
	            if(vec[i] > vec[j]){
	                lis[i] = max(lis[i],lis[j]+vec[i]);
	            }
	        }
	    }
	    for(int i = n-2; i >= 0; i--){
	        for(int j = n-1; j > i; j--){
	            if(vec[i] > vec[j]){
	                ris[i] = max(ris[i],ris[j]+vec[i]);
	            }
	        }
	    }
	    int ans = 0;
	    for(int i = 0; i < n; i++){
	        ans = max(ans,lis[i]+ris[i]-vec[i]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
