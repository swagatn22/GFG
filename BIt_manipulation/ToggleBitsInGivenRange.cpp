#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int count = 0;
	    int res = 0;
	    while(count <= 31){
	        int mul = ((n & 1<<count) == 0)? 0 : 1;
	        if(count + 1 >= a && count + 1  <= b) mul = (mul + 1) % 2;
	        res += pow(2, count) * mul;
	        count++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int solve(int num, int s, int e){
    int count = 0;
    while(count <= e){
        if(count >= s && count <= e){
            num = (num^(1<<count));
        }
        count++;
    }
    return num;
}
int toggleBits(int N , int L , int R) {
        // code here
        for(int i = L-1; i < R; i++){
            N = N ^ (1<<i);
        }
        return N;
    }

int main() {
	//code
	int t;
	cin>>t;
	int num,m,n;
	while(t--){
	    cin>>num;
	    cin>>m>>n;
	    cout<<solve(num,m-1,n-1)<<endl;
	}
	return 0;
}
