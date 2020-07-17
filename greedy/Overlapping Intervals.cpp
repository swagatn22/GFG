#include<bits/stdc++.h>
using namespace std;
bool compare(vector<int> &a, vector<int> &b){
    return a[0] < b[0]; 
}
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<vector<int>>v;
	    int x,y;
	    for(int i = 0; i< n; i++){
	        cin>>x>>y;
	        v.push_back({x,y});
	    }
	    sort(v.begin(),v.end(),compare);
	    vector<vector<int>>res;
	    res.push_back(v[0]);
	    for(int i = 1; i < v.size(); i++){
	        if(res[res.size()-1][1] >= v[i][0]){
	           res[res.size()-1][1] = max(v[i][1],res[res.size()-1][1]); 
	        }else{
	            res.push_back(v[i]);
	        } 
	    }
	    for(int i = 0; i < res.size(); i++){
	        for(int j = 0; j < 2; j++){
	            cout<<res[i][j]<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
