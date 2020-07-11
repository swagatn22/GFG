#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	int k;
	while(t--){
	    cin>>n>>k;
	    vector<int>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    int count = 0;
	    unordered_map<int,int>m;
	    for(int i = 0; i < n; i++){
	        if(m.find(k-vec[i]) != m.end()){
	            count += m[k-vec[i]];
	        }
	        m[vec[i]]++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
