#include <bits/stdc++.h>
using namespace std;

int main() {
	//codevec
	int t;
	int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<string>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    int flag = 1;
	    string res = "";
	    for(int i = 0; i< vec[0].length(); i++){
	        flag = 1;
	        for(int j = 1; j< n; j++){
	            if(vec[0][i] != vec[j][i]) flag = 0;
	        }
	        if(flag) res += vec[0][i];
	        else break;
	    }
	    if(res == "") cout<<-1<<endl;
	    else cout<<res<<endl;
	}
	return 0;
}
