#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int num = n;
	    int num2 = 0;
	    int count = -1;
	    while(n != 0){
	        if(n | 1){
	            count++;
	        }
	        num2 += pow(2,count);
	        n >>= 1; 
	    }
	    cout<<num2-num<<" "<<num2<<" "<<endl;
	}
	return 0;
}
