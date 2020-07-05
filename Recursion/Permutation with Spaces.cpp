#include<bits/stdc++.h>
using namespace std;
void solve(string a, string s,vector<string>&v){
    if(s.length() == 0){
        v.push_back(a);
        return;
    }
    string temp = a +" "+s[0];
    string temp2 = a + s[0];
    s.erase(s.begin()+0);
    solve(temp,s,v);
    solve(temp2,s,v);
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    string a = "";
	    a += s[0];
	    s.erase(s.begin()+0);
	    vector<string>v;
	    solve(a,s,v);
	    for(int i = 0; i < v.size(); i++){
	        cout<<"("<<v[i]<<")";
	    }
	    cout<<endl;
	}
	return 0;
}
