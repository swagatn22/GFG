#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        string s = "";
        int j = 0;
        while(n > 0){
            s = char((n-1)%26 + 'A')+ s;
            n = (n-1) / 26;
        }
        cout<<s<<endl;
    }
	//code
	return 0;
}
