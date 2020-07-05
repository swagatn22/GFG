#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     long long int n;
     cin>>t;
     while(t--){
         cin>>n;
         int count = 0;
         while(n > 0){
             if(n & 1)
                count++;
            n >>= 1;
         }
         cout<<count<<endl;
     }
	//code
	return 0;
}
