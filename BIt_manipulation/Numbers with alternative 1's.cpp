#include<bits/stdc++.h>
using namespace std;
bool check (int n){
    int count = 0;
    int rem = 0;
    int bit;
    for(int i = 0; i < 31; i++){
        if((((1 << i) & n) != 0) && (((1 << (i+1)) & n) != 0))
            return false;
    }
    return true;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int m = pow(2,n)-1;
	    for(int i = 1; i<= m; i++){
	        if(check(i))
	            cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
