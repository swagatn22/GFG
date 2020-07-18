#include<bits/stdc++.h>
using namespace std;
void solve(string s, int k){
    if(k == 1){
        cout<<s;
        return;
    }
    string res[k];
    int n  = s.length();
    int down = 1;
    int r = 0;
    for(int i = 0; i < n; i++){
        res[r].push_back(s[i]);
        if(r == k-1){
            down = 0;
        }else if(r == 0){
            down = 1;
        }
        down == 1 ? r++: r--;
    }
    for(int i = 0; i < k; i++) 
        cout<<res[i]; 
    return;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int k;
	    string s;
	    cin>>s;
	    cin>>k;
	    solve(s,k);
	    cout<<endl;
	}
	return 0;
}
