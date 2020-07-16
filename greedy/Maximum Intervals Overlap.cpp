#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>&a, pair<int,int> &b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
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
         vector<pair<int,int>>res;
         for(int i = 0; i < n; i++){
             res.push_back(make_pair(v1[i],1));
             res.push_back(make_pair(v2[i],0));
         }
         sort(res.begin(),res.end(),compare);
         int count = 0;
         int ans  = 0;
         int tim;
         for(int i = 0; i < res.size(); i++){
             if(res[i].second == 1){
                 count++;
                 if(ans < count){
                     ans = count;
                     tim = res[i].first;
                 }
             }else{
                 count--;
             }
         }
         cout<<ans<<" "<<tim<<endl;
     }
	//code
	return 0;
}
