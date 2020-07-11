#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    unsigned int sum = 0;
	    for(int i = 0; i <= 31; i++){
	        int mul = ((n & 1<<31-i) == 0)? 0 : 1;
	        //int mul = ((n & 1<<31-i) == 1) ? 1 : 0;
	        sum += mul*(pow(2,i));
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
