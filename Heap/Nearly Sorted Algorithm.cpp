#include<bits/stdc++.h>
using namespace std;
int main()
 {
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i = 0; i< n; i++){
            pq.push(v[i]);
            if(pq.size() > k){
                cout<<pq.top()<<" ";
                pq.pop();
            }
        }
        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
    }
	return 0;
}
