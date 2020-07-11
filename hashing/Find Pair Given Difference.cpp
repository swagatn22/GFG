#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n;
	int dif;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>dif;
	    vector<int>vec(n);
	    for(int i = 0;i < n; i++){
	        cin>>vec[i];
	    }
	    unordered_map<int,int>map;
	    int ans = -1;
	    for(int i = 0; i < n; i++){
	        if(map[vec[i]+dif] != 0 || map[vec[i]-dif] != 0){
	            ans = 1;
	            break;
	        }else{
	            map[vec[i]]++;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
