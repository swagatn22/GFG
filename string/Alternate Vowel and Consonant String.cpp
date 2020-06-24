#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    string s;
	    cin>>s;
	    priority_queue<char,vector<char>,greater<char>>c;
	    priority_queue<char,vector<char>,greater<char>>v;
	    for(int j = 0; j < n; j++){
	        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
	            v.push(s[j]);
	        }else{
	            c.push(s[j]);
	        }
	    }
	    string res = "";
	    if(abs(v.size()-c.size()) > 1){
	        cout<<-1<<endl;
	    }
	    else{
	        if(v.size() >= c.size()){
	            while(!v.empty() && !c.empty()){
	                res += v.top();
	                v.pop();
	                res += c.top();
	                c.pop();
	            }
	            if(!v.empty()){
	                res += v.top();
	                v.pop();
	            }
	       }else{
	           while(!v.empty() && !c.empty()){
	                res += v.top();
	                v.pop();
	                res += c.top();
	                c.pop();
	            }
	            if(!c.empty()){
	                res += c.top();
	                c.pop();
	            }
	       }
	       cout<<res<<endl;
	    }
	}
	return 0;
}
