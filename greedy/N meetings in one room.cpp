#include<bits/stdc++.h>
using namespace std;
bool compare(vector<int>&a, vector<int>&b){
    return a[1] < b[1];
}
int main()
 {
     int n;
     int t;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>v1(n);
         vector<int>v2(n);
         for(int i = 0; i < n; i++){
             cin>>v1[i];
         }
         for(int i = 0; i < n; i++){
             cin>>v2[i];
         }
         vector<vector<int>>res;
         for(int i = 0; i < n; i++){
             res.push_back({v1[i],v2[i],i+1});
         }
         sort(res.begin(),res.end(),compare);
         int end = res[0][1];
         cout<<res[0][2]<<" ";
         for(int i = 1; i < res.size(); i++){
             if(end <= res[i][0]){
                 cout<<res[i][2]<<" ";
                 end = res[i][1];
             }
         }
         cout<<endl;
     }
	return 0;
}
