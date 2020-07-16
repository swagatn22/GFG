#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int n;
	int t;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    int left = 0;
	    int right = n-1;
	    int count = 0;
	    while(left <= right){
	        if(v[left] != v[right]){
	            if(v[left] > v[right]){
	                v[right-1] += v[right];
	                right--;
	            }else{
	                v[left+1] += v[left];
	                left++;
	            }
	            count++;
	        }else{
	            left++;
	            right--;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
