#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     int n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>vec(n);
         for(int i = 0; i < n; i++){
             cin>>vec[i];
         }
         vector<int>left(n);
         left[0] = vec[0];
         for(int i=1; i < n; i++){
             left[i] = left[i-1]*vec[i];
         }
         vector<int>ans(n);
         int r = 1;
         for(int i = n-1; i > 0; i--){
             ans[i] = left[i-1]*r;
             r *= vec[i];
         }
         ans[0] = r;
         for(int i = 0; i < n; i++){
             cout<<ans[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
