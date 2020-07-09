#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    n = 2*n+2;
	    vector<int>nums(n);
	    for(int i =0; i < n; i++){
	        cin>>nums[i];
	    }
	    int x = 0;
	    for(int i = 0; i < n; i++){
	        x ^= nums[i];
	    }
	    int count = 0;
	    while(count <= 31){
	        if(x & (1<<count))
	            break;
	       count++;
	    }
	    int num1 = 0;
	    int num2 = 0;
	    for(int i =0; i < n; i++){
	        if(nums[i] & (1<<count)){
	            num1 ^= nums[i];
	        }else{
	            num2 ^= nums[i];
	        }
	    }
	    cout<<min(num1,num2)<<" "<<max(num1,num2)<<" "<<endl;
	}
	return 0;
}
