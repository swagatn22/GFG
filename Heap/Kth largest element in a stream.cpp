#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int num;
	int n,k;
	cin>>t;
	while(t--){
	    cin>>k>>n;
	    priority_queue<int,vector<int>,greater<int>>pq;
	    for(int i = 0; i < n; i++){
	        cin>>num;
	        pq.push(num);
	        if(pq.size()> k){
	            pq.pop();
	        }
	        if(pq.size() >= k){
	            cout<<pq.top()<<" ";
	        }else{
	            cout<<"-1"<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
