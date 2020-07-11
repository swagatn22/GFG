#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0; i<n;i++){
	        cin>>vec[i];
	    }
	    int left = 0;
	    int right = n-1;
	    int cur = 0;
	    while(cur <= right){
	        if(vec[cur] == 0){
	            swap(vec[left],vec[cur]);
	            cur++;
	            left++;
	        }
	        else if(vec[cur] == 2){
	            swap(vec[cur],vec[right]);
	            right--;
	        }else{
	            cur++;
	        }
	    }
	    for(int i = 0; i<n;i++){
	        cout<<vec[i]<<" ";
	    }
	    cout<<endl;
	    t--;
	}
	return 0;
}
