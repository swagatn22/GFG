#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	int n;
	int k;
	while(t--){
	    cin>>n;
	    cin>>k;
	    vector<int>v(n);
	    for(int i = 0; i< n; i++){
	        cin>>v[i];
	    }
	    unordered_map<int,int>m;
	    int sum = 0;
	    int len = INT_MIN;
	    for(int i = 0; i< n; i++){
	        sum += v[i];
	        if(sum == k){
	            len = max(len,i+1);
	        }
	        if(m.find(sum-k) != m.end()){
	            len = max(len,i-m[sum-k]);
	        }
	        if(m.find(sum) == m.end()){
	            m[sum] = i;
	        }
	        
	    }
	    len == INT_MIN ? cout<<0<<endl : cout<<len<<endl;
	}
	return 0;
}
