#include <bits/stdc++.h>
using namespace std;
int count(int num){
    int count = 0;
    while(num){
        count++;
        num >>= 1;
    }
    return count;
}

int main() {
	//code
	int t;
	cin>>t;
	int num1,num2;
	while(t--){
	    cin>>num1>>num2;
	    int a = min(num1,num2);
	    int b = max(num1,num2);
	    int n1 = count(a);
	    int n2 = count(b);
	    int diff = n2-n1;
	    while(diff--){
	        a <<= 1;
	    }
	    int x = a^b;
	    cout<<x<<endl;
	}
	return 0;
}
