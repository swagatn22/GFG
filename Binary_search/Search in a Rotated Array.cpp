#include<bits/stdc++.h>
using namespace std;
int search(vector<int> A,int B, int left, int right){
  while(left <= right){
      int mid = left+(right-left)/2;
      if(A[mid] == B){
          return mid;
      }else if(A[mid] < B){
          left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}
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
         int ele;
         cin>>ele;
         int left = 0;
         int right = n-1;
         int ans = 0;
         int mid,prv,next;
         while(left <= right){
             mid = (right-left)/2+left;
             next = (mid + 1)%n;
             prv = (mid+n-1)%n;
             if(vec[mid] <= vec[next] && vec[mid] <= vec[prv]){
                 ans = mid;
                 break;
             }
             if(vec[mid] <= vec[right]){
                 right = mid -1;
             }else if(vec[mid] >= vec[left]){
                 left = mid+1;
             }
         }
         if(vec[ans] == ele){
             cout<<ans<<endl;
         }else{
             int id1 = search(vec,ele,ans,n-1);
             int id2 = search(vec,ele,0,ans-1);
             if(id2 != -1) cout<<id2<<endl;
             else if(id1 != -1) cout<<id1<<endl;
             else cout<<-1<<endl;
         }
     }
	//code
	return 0;
}
