#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    vector<int>search(n,0);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    for(int i = 0; i < n; i++){
	        if(search[vec[i]-1] == 0){
	            search[vec[i]-1]  = 1;
	        }else{
	            search[vec[i]-1]++;
	        }
	    }
	    for(int i = 0; i < n; i++){
	        cout<<search[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
