#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i < n ; i++) cin>>arr[i];
	    int res = 0;
	    int sum = 0;
	    int pos = 0;
	    for(int i = 0 ; i < n; i++){
	        if(arr[i] < 0) sum = 0;
	        else sum += arr[i];
	        if(sum >= res){
	            res = sum;
	            pos = i;
	        }
	    }
	    vector<int> r;
	    while(res != 0){
	        r.push_back(arr[pos]);
	        res -= arr[pos--];
	        
	    }
	    reverse(r.begin(), r.end());
	    if(r.size()==0)cout<<"0";
	    for(int i = 0 ; i < r.size(); i++){
	        cout<<r[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
