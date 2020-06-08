#include <bits/stdc++.h>
using namespace std;
int LIS(vector<int>vec, int n){
    vector<int>dp= vec;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(vec[i] > vec[j]){
                dp[i] = max(dp[i], vec[i]+dp[j]);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
}

int main() {
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    for(int i =0; i <n; i++){
	        cin>>vec[i];
	    }
	    cout<<LIS(vec,n)<<endl;
	}
	return 0;
}
