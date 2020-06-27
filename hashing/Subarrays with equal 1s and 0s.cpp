#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i< n; i++){
	        cin>>v[i];
	    }
	    vector<int>vec(n);
        for(int i=0; i < n; i++){
            if(v[i] == 0) {
                vec[i] = -1;
            }
            else{
                vec[i] = 1;
            }
        }
	    unordered_map<int,int>m;
	    int sum = 0;
	    int count = 0;
	    for(int i = 0; i< n; i++){
	        sum += vec[i];
	        if(sum == 0){
	            count++;
	        }
	        m[sum]++;
	    }
	    for(auto it = m.begin(); it != m.end(); it++){
	        int n = it->second;
	        count += (n)*(n-1)/2;
	    }
	     cout<<count<<endl;
	}
	return 0;
}
