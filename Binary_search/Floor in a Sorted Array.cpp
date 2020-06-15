#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     int ele;
     cin>>t;
     while(t--){
         cin>>n>>ele;
         int a[n];
         for(int i = 0; i < n; i++){
             cin>>a[i];
         }
         int mid;
         int left = 0; 
         int right = n-1;
         int ans = -1;
         while(left <= right){
             mid = (right-left)/2+left;
             if(a[mid] <= ele){
                 ans = mid;
                 left = mid+1;
             }else{
                 right = mid-1;
             }
         }
         cout<<ans<<endl;
     }
	//code
	return 0;
}
