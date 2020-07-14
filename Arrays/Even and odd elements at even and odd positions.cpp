#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     int n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>v(n);
         for(int i = 0; i < n; i++){
             cin>>v[i];
         }
         //int i = 0;
         vector<int>res(n);
         vector<int>mark(n,0);
         int j = 1;
         int k = 0;
         for(int i = 0; i < n; i++){
             if(v[i] % 2 == 0){
                 res[k] = v[i];
                 k += 2;
             }else{
                 if(j >= n){
                     res[n-1] = v[i];
                 }
                 res[j] = v[i];
                 j += 2;
             }
         }
         for(int i = 0; i < n; i++){
             cout<<res[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
