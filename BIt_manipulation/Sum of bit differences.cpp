#include<bits/stdc++.h>
using namespace std;
int difference(int a, int b){
    int count = 0;
    int diff = 0;
    while(count < 32){
        if((a & 1<<count) != (b & 1<<count))
            diff++;
        count++;
    }
    return diff;
}
int main()
 {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         vector<int>v(n);
         for(int i = 0; i < n; i++){
             cin>>v[i];
         }
         int res = 0;
         for(int i = 0; i < n-1; i++){
             for(int j = i+1; j < n; j++){
                 res += 2*difference(v[i],v[j]);
             }
         }
         cout<<res<<endl;
     }
	//code
	return 0;
}
