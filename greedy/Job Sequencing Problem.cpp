#include<bits/stdc++.h>
using namespace std;
bool compare(vector<int> &a, vector<int>&b){
    return a[2] > b[2];
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    vector<vector<int>>vec;
	    for(int i = 0; i< n; i++){
	        vector<int>v(3);
	        cin>>v[0];
	        cin>>v[1];
	        cin>>v[2];
	        vec.push_back(v);
	    }
	    sort(vec.begin(),vec.end(),compare);
	    vector<int>present(n,0);
	    int job = 0;
	    int profit = 0;
	    for(int i = 0; i< vec.size(); i++){
	        for(int j = min(n,vec[i][1])-1; j>= 0; j--){
	            if(present[j] == 0){
	                present[j] = 1;
	                profit += vec[i][2];
	                job++;
	                break;
	            }
	        }
	    }
	    cout<<job<<" "<<profit<<endl;
	}
	return 0;
}
