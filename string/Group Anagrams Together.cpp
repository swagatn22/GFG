#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
         cin>>n;
         string s;
         unordered_map<string,int>m;
         for(int i = 0; i < n; i++){
             cin>>s;
             sort(s.begin(),s.end());
             m[s]++;
         }
         for(auto it = m.begin(); it != m.end(); it++){
             cout<<it->second<<" ";
         }
         cout<<endl;
     }
	//code
	return 0;
}
