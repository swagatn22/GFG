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
int search2(vector<int> A,int B, int left, int right){
  while(left <= right){
      int mid = left+(right-left)/2;
      if(A[mid] == B){
          return mid;
      }else if(A[mid] > B){
          left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}
int peakElement( vector<int>arr, int n)
{
    int mid;
    int left = 0;
    int right = n-1;
    while(left <= right){
        mid = (right-left)/2+left;
        if(mid > 0 && mid < n-1){
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1] < arr[mid]){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }else if(mid == 0){
            if(arr[mid] > arr[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid == n-1){
            if(arr[mid] > arr[mid-1]){
                return mid;
            }else{
                return mid-1;
            }
        }
    }
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
         int id = peakElement(vec,n);
         if(vec[id] == ele){
             cout<<id<<endl;
         }else{
            int id1 = search(vec,ele,0,id-1);
            int id2 = search2(vec,ele,id,n-1);
            if(id1 != -1) cout<<id1<<endl;
            else if(id2 != -1) cout<<id2<<endl;
            else cout<<-1<<endl;
         }
     }
	return 0;
}
