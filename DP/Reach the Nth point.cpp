#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        vector<long long int>dp(n);
        dp[0] = 1;
        dp[1] = 2;
        for(int i = 2; i < n; i++){
            dp[i] = dp[i-2]+dp[i-1];
        }
        cout<<dp[n-1]<<"\n";
    }
    return 0;
}
