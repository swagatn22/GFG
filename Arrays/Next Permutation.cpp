#include<bits/stdc++.h>
using namespace std;
void solve( vector<int>v, int n){
    int i;
    for(i = n-1; i > 0; i--){
        if(v[i-1] < v[i]){
            break;
        }
    }
    if(i == 0){
        for(i = n-1; i >= 0; i--){
            cout<<v[i]<<" ";
        }
    }else{
        int prv = 100;
        int id = i;
        for(int j = i; j < n; j++){
            if(v[j] > v[i-1] && v[j] <= prv){
                id = j;
                prv = v[j];
            }
        }
        swap(v[i-1],v[id]);
        sort(v.begin() + i, v.end());
        for(int i = 0; i < n; i++){
            cout<<v[i]<<" ";
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
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    solve(v,n);
	    cout<<endl;
	}
	return 0;
}
