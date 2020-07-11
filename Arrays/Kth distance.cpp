#include<bits/stdc++.h>
using namespace std;
string solve(vector<int>vec, int k,int n){
    unordered_map<int,int>m;
    for(int i = 0; i < k; i++){
        m[vec[i]]++;
        if(m[vec[i]] >= 2){
            return "True";
        }
    }
    for(int i = k; i < n; i++){
        if(m[vec[i]] >= 1){
            return "True";
        }
        m[vec[i-k]]--;
        m[vec[i]]++;
    }
    return "False";
}
int main()
 {
     int k,n,t;
     cin>>t;
     while(t--){
         cin>>k;
         cin>>n;
         vector<int>vec(n);
         for(int i =0; i <n; i++){
             cin>>vec[i];
         }
         cout<<solve(vec,k,n)<<endl;
     }
	//code
	return 0;
}
