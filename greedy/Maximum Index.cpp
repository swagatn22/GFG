#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	int num;
	while(t--){
	    cin>>n;
	    vector<int>v(n);
	    vector<pair<int,int>>vec;
	    for(int i =0; i < n; i++){
	        cin>>v[i];
	    }
	    for(int i = 0; i < n; i++){
	        vec.push_back(make_pair(v[i],i));
	    }
	    sort(vec.begin(),vec.end());
	    int ans = 0;
	    int ind = vec[0].second;
	    for(int i = 1; i < vec.size(); i++){
	        ans = max(ans,vec[i].second-ind);
	        ind = min(ind,vec[i].second);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
