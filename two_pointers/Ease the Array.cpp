#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>vec(n);
         for(int i = 0; i < n;i++){
             cin>>vec[i];
         }
         for(int i = 0; i < n-1; i++){
            if(vec[i] == vec[i+1]){
                vec[i] = 2*vec[i+1];
                vec[i+1] = 0;
             }
         }
         int j = 0;
         for(int i = 0; i < n; i++){
             if(vec[i] != 0){
                 swap(vec[j++],vec[i]);
             }
         }
         for(int i = 0; i < n; i++){
             cout<<vec[i]<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
