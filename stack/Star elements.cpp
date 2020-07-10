#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    int sum = 0;
	    stack<int>s;
	    s.push(vec[n-1]);
	    for(int i = n-2; i >= 0; i--){
	        if(vec[i] > s.top()){
	            s.push(vec[i]);
	        }
	    }
	    int super = s.top();
	    int count = 0;
	    for(int i = 0; i < n; i++){
	        if(vec[i] == s.top()){
	            count++;
	        }
	    }
	    while(!s.empty()){
	        cout<<s.top()<<" ";
	        s.pop();
	    }
	    cout<<endl;
	    count == 1 ? cout<<super<<endl:cout<<-1<<endl;
	}
	return 0;
}
