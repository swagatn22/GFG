#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    vector<int>vec(n);
	    for(int i = 0; i< n; i++){
	        cin>>vec[i];
	    }
	    deque<int>dq;
	    for(int i = 0; i < k; i++){
	        while(!dq.empty() && vec[i] >= vec[dq.back()]){
	            dq.pop_back();
	        }
	        dq.push_back(i);
	    }
	    for(int i = k; i < n; i++){
	        cout<<vec[dq.front()]<<" ";
	        if(!dq.empty() && dq.front() <= i-k){
	            dq.pop_front();
	        }
	        while(!dq.empty() && vec[i] >= vec[dq.back()]){
	            dq.pop_back();
	        }
	        dq.push_back(i);
	    }
	    cout<<vec[dq.front()];
	    cout<<endl;
	}
	return 0;
}
