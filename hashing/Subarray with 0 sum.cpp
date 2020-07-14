#include<bits/stdc++.h>
using namespace std;
string solve( vector<int>vec, int n){
    int sum = 0;
    unordered_map<int,int>m;
    for(int i = 0; i < n; i++){
        sum += vec[i];
        if(sum == 0){
            return "Yes";
        }
        if(m.find(sum) != m.end()){
            return "Yes";
        }
        m[sum]++;
    }
    return "No";
}
int main()
 {
     int t;
     int n;
     cin>>t;
     while(t--){
         cin>>n;
         vector<int>vec(n);
         for(int i = 0;i < n; i++){
             cin>>vec[i];
         }
         cout<<solve(vec,n)<<endl;
     }
	//code
	return 0;
}
