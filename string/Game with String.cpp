#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int k;
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cin>>k;
	    unordered_map<char,int>m;
	    for(int i = 0; i <s.length(); i++){
	        m[s[i]]++;
	    }
	    priority_queue<int>pq;
	    for(auto it = m.begin(); it != m.end(); it++){
	        pq.push(it->second);
	    }
	    long long int num = 0;
	    long long int val;
	    while(k--){
	        int val = pq.top();
	        val--;
	        pq.pop();
	        pq.push(val);
	    }
	    while(!pq.empty()){
	        int val = pq.top();
	        pq.pop();
	        num += val*val;
	    }
	    cout<<num<<endl;
	}
	return 0;
}
