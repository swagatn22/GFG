#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    vector<vector<int>>vec(m,vector<int>(n));
	    for(int i = 0; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cin>>vec[i][j];
	        }
	    }
	    int flag = 0;
	    for(int i = 0; i < m; i++){
	        flag = 0;
	        for(int j = 0; j < n; j++){
	            if(vec[i][j]== 1){
	                flag = 1;
	                break;
	            }
	        }
	        if(flag){
	            for(int j = 0; j < n; j++){
	                if(vec[i][j] == 1){
	                    vec[i][j] = 2;
	                }else{
	                   vec[i][j] = 1;
	               }
	            }
	        }
	    }
	    for(int i = 0; i < n; i++){
	        flag = 0;
	        for(int j = 0; j < m; j++){
	            if(vec[j][i] == 2){
	                flag = 1; 
	                break;
	            }
	        }
	        if(flag){
	            for(int j = 0; j < m; j++){
	                vec[j][i] = 1;
	            }
	        }
	    }
	    for(int i = 0; i < m; i++){
	        for(int j = 0; j < n; j++){
	            cout<<vec[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
