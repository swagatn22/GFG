#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    int left = 0;
	    int right = 0;
	    while(right < n){
	        if(vec[right] != 0){
	             swap(vec[left++],vec[right++]);
	        }else{
	           right++;
	        }
	    }
	    for(int i = 0; i < n; i++){
	        cout<<vec[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
