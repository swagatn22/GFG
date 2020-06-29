#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&vec, int n, int k){
    int left,right;
    int sum  = 0;
    int flag = 0;
    sort(vec.begin(),vec.end());
    for(int i = 0; i < n-3; i++){
        if(i > 0 && vec[i] == vec[i-1]){
            continue;
        }
        for(int j = i+1; j < n-2; j++){
            if(j > i+1 && vec[j] == vec[j-1]){
                continue;
            }
            left = j+1;
            right = n-1;
            while(left < right){
                sum = vec[i]+vec[j]+vec[left]+vec[right];
                if(sum == k){
                    flag = 1;
                    cout<<vec[i]<<" "<<vec[j]<<" "<<vec[left]<<" "<<vec[right]<<" "<<"$";
                    left++;
                    while(left < right && vec[left] == vec[left-1]){
                        left++;
                    }
                }else if(sum > k){
                    right--;
                }else{
                    left++;
                }
            }
        }
    }
    if(flag == 0)
        cout<<"-1";
}

int main() {
	//code
	int t;
	cin>>t;
	int n,k;
	while(t--){
	    cin>>n>>k;
	    vector<int>vec(n);
	    for(int i = 0; i  <n; i++){
	        cin>>vec[i];
	    }
	    solve(vec,n,k);
	    cout<<endl;
	}
	return 0;
}
