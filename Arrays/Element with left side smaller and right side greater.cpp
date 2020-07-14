#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    vector<int>right(n);
	    right[n-1] = vec[n-1];
	    vector<int>left(n);
	    left[0] = vec[0];
	    int ans = -1;
	    for(int i = 1; i< n; i++){
	        left[i] = max(vec[i],left[i-1]);
	    }
	    for(int i = n-2; i >= 0; --i){
	        right[i] = min(right[i+1],vec[i]);
	    }
	    for(int i = 1; i < n-1; i++){
	       if(right[i] == left[i]){
	           ans = left[i];
	           break;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
