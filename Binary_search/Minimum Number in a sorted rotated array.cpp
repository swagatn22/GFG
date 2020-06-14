#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     int n;
     while(t--){
         cin>>n;
         vector<int>vec(n);
         for(int i = 0; i < n; i++){
             cin>>vec[i];
         }
         int left = 0;
         int right = n-1;
         int ans = 0;
         int mid,prv,next;
         while(left <= right){
             mid = (right-left)/2+left;
             next = (mid + 1)%n;
             prv = (mid+n-1)%n;
             if(vec[mid] <= vec[next] && vec[mid] <= vec[prv]){
                 ans = vec[mid];
             }
             if(vec[mid] <= vec[right]){
                 right = mid -1;
             }else if(vec[mid] >= vec[left]){
                 left = mid+1;
             }
         }
         cout<<ans<<endl;
     }
	//code
	return 0;
}
