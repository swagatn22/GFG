#include<bits/stdc++.h>
using namespace std;
int solve( vector<int>cost,int n,int w,vector<int>wt){
    vector<vector<int>>dp(n+1,vector<int>(w+1));
    for(int i = 0; i <= n;i++){
        dp[i][0] = 0;
    }
    for(int j = 0; j <= w; j++){
        dp[0][j] = 100000;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= w; j++){
            if(wt[i-1] <= j){
                dp[i][j] = min(cost[i-1] + dp[i][j-wt[i-1]],dp[i-1][j]);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][w] == 100000 ? -1 : dp[n][w];
}
int main()
 {
	//code
	int t;
	int n;
	int w;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>w;
	    vector<int>v(n);
	    for(int i = 0; i< n; i++){
	        cin>>v[i];
	    }
	    vector<int>cost;
	    vector<int>wt;
	    int s = 0;
	    for(int i = 0; i< n; i++){
	        if(v[i] != -1){
	            cost.push_back(v[i]);
	            wt.push_back(i+1);
	        }
	    }
	    cout<<solve(cost,cost.size(),w,wt)<<endl;
	}
	return 0;
}
