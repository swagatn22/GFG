#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     int n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>v1(n);
         vector<int>v2(n);
         vector<int>res(10,0);
         vector<int>check(10,0);
         for(int i = 0; i< n; i++){
             cin>>v1[i];
             res[v1[i]] = 1;
         }
         for(int i = 0; i< n; i++){
             cin>>v2[i];
             res[v2[i]] = 1;
         }
         int count = 0;
         for(int i = 9; count < n; i--){
             if(res[i] == 1){
                 check[i] = 1;
                 count++;
             }
         }
         for(int i  = 0; i < n ; i++){
             if(check[v2[i]] == 1){
                 cout<<v2[i]<<" ";
                 check[v2[i]]--;
             }
         }
         for(int i  = 0; i < n ; i++){
             if(check[v1[i]] == 1){
                 cout<<v1[i]<<" ";
                 check[v1[i]]--;
             }
         }
         cout<<endl;
     }
	//code
	return 0;
}
