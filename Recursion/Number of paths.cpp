#include <iostream>
using namespace std;
int solve(int a,int b,int m,int n){
     if(a == m && b == n){
        return 1;
    }
    if(a > m || b > n)
        return 0;
    int ans = solve(a+1,b,m,n)+solve(a,b+1,m,n);
    return ans;
}

int main() {
	//code
	int m,n,t;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    cout<<solve(0,0,m-1,n-1)<<endl;
	}
	return 0;
}
