#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int m,n;
	while(t--){
	    cin>>m>>n;
	    vector<vector<int>>vec(m,vector<int>(n));
	    for(int i = 0; i <m; i++){
	        for(int j =0; j < n; j++){
	            cin>>vec[i][j];
	        }
	    }
	    int ele;
	    cin>>ele;
	    int left = 0;
	    int ans = 0;
	    int right = n-1;
	    while(left < m && right >= 0){
	        if(vec[left][right] == ele){
	            ans = 1;
	            break;
	        }else if(vec[left][right] < ele){
	            left++;
	        }else{
	            right--;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
