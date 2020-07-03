#include<bits/stdc++.h>
using namespace std;
void comb_sum(vector<int>&v,int n,int k,vector<int>temp,vector<vector<int>>&res){
    if(n == 0 || k < 0){
        return;
    }
    if(k == 0){
        res.push_back(temp);
        return;
    }
    vector<int>v1 = temp;
    v1.push_back(v[n-1]);
    comb_sum(v,n,k-v[n-1],v1,res);
    vector<int>v2 = temp;
    v.pop_back();
    comb_sum(v,n-1,k,v2,res);
    return;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int k;
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    cin>>k;
	    sort(v.begin(),v.end(),greater<int>());
	    int ind=0;
	    for(int i = 0; i < n-1; i++){
	        if(v[i] != v[i+1]){
	            v[ind++] = v[i];
	        }
	    }
	    v[ind++] = v[n-1];
	    vector<vector<int>>res;
	    vector<int>temp;
	    comb_sum(v,ind,k,temp,res);
	    int f = 0;
	    for(int i = 0; i <res.size(); i++){
	        if(res[i].size() == 0){
	            continue;
	        }
	        f = 1;
	        cout<<"(";
	        for(int j = 0;j < res[i].size()-1; j++){
	            cout<<res[i][j]<<" ";
	        }
	        cout<<res[i][res[i].size()-1]<<")";
	    }
	    if(f == 0){
	        cout<<"Empty";
	    }
	    cout<<endl;
	}
	return 0;
}
