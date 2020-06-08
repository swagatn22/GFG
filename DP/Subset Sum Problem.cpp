//top-down approach
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    int sum = 0;
	    for(int i =0; i < n; i++){
	        cin>>vec[i];
	        sum += vec[i];
	    }
	    if(sum % 2 == 1){
	        cout<<"NO"<<endl;
	    }else{
	        int search = sum/2;
	        vector<vector<bool>>dp(n+1,(vector<bool>(search+1)));
	        solve(n,search,vec,dp) == true?cout<<"YES"<<endl:cout<<"NO"<<endl;
	    }
	}
	return 0;
}
 bool solve(int n,int sum,vector<int> &A,vector<vector<bool>>&dp){
    for(int i = 0; i <= sum; i++){
        dp[0][i] = false;
    }
    for(int i = 0; i<= n; i++){
        dp[i][0] = true;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(A[i-1] <= j){
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}


//Bottom-up
vector<vector<int>>dp(n+1,vector<int>(sum/2+1,-1));
bool solve(int n,int sum,vector<int> &A,vector<vector<int>>&dp){
    if(n == 0 && sum != 0){
        return 0;
    }
    if(sum == 0 && n >= 0 ){
        return 1;
    }
    if(dp[n][sum] != -1){
        return dp[n][sum];
    }
    if(A[n-1] <= sum){
        return dp[n][sum] = solve(n-1,sum-A[n-1],A,dp) || solve(n-1,sum,A,dp);
    }
    return dp[n][sum] = solve(n-1,sum,A,dp);
}
