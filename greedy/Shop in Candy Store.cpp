#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n,k;
	while(t--){
	    cin>>n>>k;
	    vector<int>vec(n);
	    for(int i =0; i < n; i++){
	        cin>>vec[i];
	    }
	    sort(vec.begin(),vec.end());
	    int min_sum = 0;
	    int max_sum = 0;
	    int right = 0;
	    int left = n-1;
	    while(right <= left){
	        min_sum += vec[right];
	        left -= k;
	        right++;
	    }
	    right = 0;
	    left = n-1;
	    while(right <= left){
	        max_sum += vec[left];
	        right += k;
	        left--;
	    }
	    cout<<min_sum<<" "<<max_sum<<" "<<endl;
	}
	return 0;
}
