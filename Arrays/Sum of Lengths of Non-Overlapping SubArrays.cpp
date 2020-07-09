#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    for(int i =0; i < n; i++){
	        cin>>vec[i];
	    }
	    cin>>k;
	    int num = 0;
	    int ans = 0;
	    int len = 0;
	    int result = 0;
	    int max_len = 0;
	    for(int i = 0; i < n; i++){
	        num = max(num,vec[i]);
	        len ++;
	        if(num == k && max_len < len){
	            max_len = len;
	            ans = len;
	        }
	        if(num > k){
	            num = 0;
	            result += ans;
	            ans = 0;
	            len = 0;
	            max_len = 0;
	        }
	    }
	    if(num == k){
	        result += ans;
	    }
	    cout<<result<<endl;
	}
	return 0;
}
