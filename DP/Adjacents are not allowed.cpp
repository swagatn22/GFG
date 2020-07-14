#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m;
	    cin>>m;
	    int ar[2][m];
	    for(int i = 0; i <2; i++){
	        for(int j = 0; j < m; j++){
	            cin>>ar[i][j];
	        }
	    }
	    int dp[m];
	    dp[0] = max(ar[0][0],ar[1][0]);
	    if(m == 1){
	        cout<<dp[0]<<endl;
	    }else{
	        dp[1] = max(dp[0],max(ar[0][1],ar[1][1]));
	        for(int i = 2; i < m; i++){
	            dp[i] = max(max(ar[0][i],ar[1][i])+dp[i-2],dp[i-1]);
	        }
	        cout<<dp[m-1]<<endl;
	    }
	        
	}
	return 0;
}
