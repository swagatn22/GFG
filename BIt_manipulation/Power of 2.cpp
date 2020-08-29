#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    int count = 0;
	    int bits = 0;
	    while(count <= 31){
	        if(n & 1<<count)
	            bits++;
	        count++;
	    }
	    if(bits == 1)
	        cout<<"YES"<<endl;
	    else 
	        cout<<"NO"<<endl;
	}
	return 0;
}
