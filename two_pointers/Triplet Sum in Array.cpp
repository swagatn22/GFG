#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>v, int n, int k){
    sort(v.begin(),v.end());
    int left = 0;
    int sum;
    int right = n-1;
    for(int i = 0; i < n-1; i++){
        left = i+1;
        right = n-1;
        sum = 0;
        while(left < right){
            sum = v[left]+v[right]+v[i];
            if(k == sum){
                return 1;
            }else if(sum > k){
                right--;
            }else{
                left++;
            }
        }
    }
    return 0;
}
int main()
 {
	//code
	int t;
	int n;
	int k;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>k;
	    vector<int>v(n);
	    for(int i = 0; i <n; i++){
	        cin>>v[i];
	    }
	    cout<<solve(v,n,k)<<endl;
	}
	return 0;
}
