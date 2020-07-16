#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	char c;
	while(t--){
	    cin>>n;
	    queue<char>q;
	    unordered_map<char,int>m;
	    for(int i = 0; i<n; i++){
	        cin>>c;
	        m[c]++;
	        q.push(c);
	        while(!q.empty()){
	            if(m[q.front()] == 1){
	                cout<<q.front()<<" ";
	                break;
	            }else{
	                q.pop();
	            }
	        }
	        if(q.empty()){
	            cout<<-1<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
