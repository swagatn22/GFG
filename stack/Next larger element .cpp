#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<ll>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    stack<ll>s;
	    vector<ll>res(n);
	    res[n-1] = -1;
	    s.push(vec[n-1]);
	    for(int i = n-2; i >= 0; i--){
	        if(!s.empty() && s.top() > vec[i]){
	            res[i] = s.top();
	            s.push(vec[i]);
	            
	        }else{
	            while(!s.empty() && s.top() <= vec[i]){
	                s.pop();
	            }
	            if(s.empty()){
	                res[i] = -1;
	                
	            }else{
	                res[i] = s.top();
	             }
	            s.push(vec[i]);
	       }
	    }
	    for(int i =0 ; i < n; i++){
	        cout<<res[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
