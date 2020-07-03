#include<bits/stdc++.h>
using namespace std;
void solve(string s, int i,int j, int n){
    if(n == 0){
        if(j <= i)
        cout<<s<<" ";
        return;
    }
    solve(s+'1',i+1,j,n-1);
    if(j+1 <= i)solve(s+'0',i,j+1,n-1);
}
int main()
 {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    string s = "";
	    int i = 0;
	    int j = 0;
	    solve(s,i,j,n);
	    cout<<endl;
	}
	return 0;
}
