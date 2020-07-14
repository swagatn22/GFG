#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int sum;
	int t;
	int n;
	int k;
	cin>>t;
	int start;
	while(t--){
	    cin>>n>>k;
	    start = 0;
	    sum = 0;
	    vector<int>vec(n);
	    int len = INT_MAX;
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    for(int i = 0; i < n; i++){
	        if(vec[i] > k){
	            len = 1;
	            break;
	        }
	        sum += vec[i];
	        while(sum > k){
	            len = min(len,i-start+1);
	            sum -= vec[start++];
	        }
	    }
	    cout<<len<<endl;
	}
	return 0;
}
