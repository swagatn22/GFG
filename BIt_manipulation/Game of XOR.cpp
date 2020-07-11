#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>vec(n);
         for(int i = 0; i < n; i++){
             cin>>vec[i];
         }
         int x = 0;
         for(int i = 0; i < n; i+=2){
             x ^= vec[i];
         }
         n % 2 == 0 ? cout<<0<<endl:cout<<x<<endl;
     }
	//code
	return 0;
}
