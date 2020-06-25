#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int num;
	    priority_queue<int,vector<int>,greater<int>>pq;
	    for(int i = 0; i < n; i++){
	        cin>>num;
	        pq.push(num);
	    }
	    long long int sum = 0;
	    while(pq.size() > 1){
	        int x = pq.top();
	        pq.pop();
	        int y = pq.top();
	        pq.pop();
	        pq.push(x+y);
	        sum += x+y;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
