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
         for(int i = 0; i < n;i++){
             cin>>vec[i];
         }
         int left = 0;
         int right = n-1;
         int mid;
         int res = n;
         while(left <= right){
             mid = (right-left)/2+left;
             if(vec[mid] == 0){
                 res = mid;
                 right = mid-1;
             }else{
                 left = mid+1; 
             }
         }
         cout<<n-res<<endl;
     }
	//code
	return 0;
}
