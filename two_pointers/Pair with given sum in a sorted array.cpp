#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t,n;
     cin>>t;
     while(t--){
        cin>>n;
        vector<int>v(n);
        int sum;
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
        cin>>sum;
        int left = 0;
        int right = n-1;
        int flag = 1;
        while(left < right){
            if(v[left]+v[right] == sum && v[left] != v[right]){
                cout<<v[left]<<" "<<v[right]<<" "<<sum<<endl;
                flag = 0;
                left++;
                right--;
            }else if(v[left]+v[right] > sum){
                right--;
            }else{
                left++;
            }
        }
        if(flag)cout<<-1<<endl;
     }
     
	//code
	return 0;
}
