#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>left(n);
	    vector<int>right(n);
	    vector<int>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    int sum = 0;
	    left[0] = vec[0];
	    for(int i =1; i < n; i++){
	        left[i] = max(left[i-1],vec[i]);
	    }
	    right[n-1]= vec[n-1];
	    for(int i = n-2; i >= 0; i--){
	        right[i] = max(right[i+1],vec[i]);
	    }
	    for(int i =0; i <n; i++){
	        sum += min(left[i],right[i])-vec[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
