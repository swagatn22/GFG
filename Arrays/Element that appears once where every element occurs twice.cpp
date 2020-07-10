#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        vector<int>vec(n);
        for(int i = 0; i < n; i++){
            cin>>vec[i];
        }
        int x = 0;
        for(int i = 0; i < n; i++){
             x ^= vec[i];
        }
        cout<<x<<endl;
    }
	//code
	return 0;
}
