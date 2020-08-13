#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>k;
        vector<int>v(n);
        int count = 0;
        for(int i = 0; i< n; i++){
            cin>>v[i];
        }
        int num = 0;
        int sum = 0;
        for(int i = 0; i< n; i++){
            sum += v[i];
           if(v[i] > k){
               count++;
           }
           if(sum > k){
               num++;
           }
        }
        count += num*(num-1)/2;
        cout<<count<<endl;
    }
	//code
	return 0;
}
