#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0; i<n;i++){
	        cin>>vec[i];
	    }
	    stack<int>s;
	    s.push(vec[n-1]);
	    for(int i = n-2; i >= 0; i--){
	        if(s.top()<= vec[i]){
	            s.push(vec[i]);
	        }
	    }
	    while(!s.empty()){
	        cout<<s.top()<<" ";
	        s.pop();
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
