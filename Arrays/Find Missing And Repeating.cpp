#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>vec(n);
        for(int i = 0;i < n; i++){
            cin>>vec[i];
        }
        int ans1 = INT_MAX;
        for(int i = 0; i < n; i++){
            if(vec[abs(vec[i])-1] > 0){
               vec[abs(vec[i])-1]  = -vec[abs(vec[i])-1]; 
            }else{
                ans1 = min(ans1,abs(vec[i]));
            }
        }
        int ans2 = INT_MAX;
        for(int i = 0; i < n; i++){
            if(vec[i] > 0){
                ans2 = min(ans2,i+1);
            }
        }
        cout<<ans1<<" "<<ans2<<endl;
        
    }
	//code
	return 0;
}
