#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    vector<int>v1(n);
	    vector<int>res;
	    map<int,int>m;
	    map<int,int>:: iterator it;
	    for(int i= 0;i  < n; i++){
	        cin>>v1[i];
	        m[v1[i]]++;
	    }
	    int x;
	    for(int i = 0; i<k; i++){
	        cin>>x;
	        it = m.find(x);
	        while(it->second--){
	            cout<<it->first<<" ";
	        }
	        it->second = 0;
	    }
	    for(auto i = m.begin(); i != m.end(); i++){
	        while(i->second--){
	            cout<<i->first<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
