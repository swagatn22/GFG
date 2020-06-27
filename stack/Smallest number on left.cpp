#include<bits/stdc++.h>
using namespace std;
void NSL(vector<int>v, int n){
    stack<int>s;
    s.push(v[0]);
    cout<<-1<<" ";
    for(int i = 1; i< n; i++){
        if(!s.empty() && s.top() < v[i]){
            cout<<s.top()<<" ";
            s.push(v[i]);
        }else{
            while(!s.empty() && s.top() >= v[i]){
                s.pop();
            }
            if(s.empty()){
                cout<<-1<<" ";
            }else{
                cout<<s.top()<<" ";
            }
            s.push(v[i]);
        }
    }
}
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0;i < n; i++){
	        cin>>v[i];
	    }
	    NSL(v,n);
	    cout<<endl;
	}
	return 0;
}
