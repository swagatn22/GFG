#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<vector<int>>vec(n,vector<int>(n));
	    vector<vector<int>>dis(n,vector<int>(n));
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            cin>>vec[i][j];
	        }
	    }
	    for(int k = 0; k < n; k++){
	        for(int i = 0; i < n; i++){
	            for(int j =0; j < n; j++){
	                if(vec[i][j] > vec[i][k]+vec[k][j]){
	                    vec[i][j] = vec[i][k]+vec[k][j];
	                }
	            }
	        }
	    }
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            if(vec[i][j] == 10000000){
	                cout<<"INF"<<" ";
	            }else{
	                cout<<vec[i][j]<<" ";
	            }
	        }
	         cout<<endl;
	    }
	}
	return 0;
}
