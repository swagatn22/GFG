#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        int sum = 0;
        vector<int>vec(n);
        for(int i =0; i < n; i++){
            cin>>vec[i];
            sum += vec[i];
        }
        int right = 0;
        int ans = -1;
        for(int i = n-1; i >= 0; i--){
            right += vec[i];
            if(sum == right){
                ans = i+1;
                break;
            }
            sum -= vec[i];
            
        }
        cout<<ans<<endl;
    }
	return 0;
}
