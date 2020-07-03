#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>v,vector<int>temp,vector<vector<int>>&vec){
    if(v.size() == 0){
        vec.push_back(temp);
        return;
    }
    vector<int>v1 = temp;
    vector<int>v2 = temp;
    v1.push_back(v[v.size()-1]);
    v.pop_back();
    solve(v,v1,vec);
    solve(v,v2,vec);
}
int main()
 {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    vector<int>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    vector<vector<int>>res;
	    vector<int>temp;
	    solve(v,temp,res);
	    set<vector<int>>s;
	    for(int i = 0; i < res.size(); i++){
	        s.insert(res[i]);
	    }
	    auto it = s.begin();
	    while(it != s.end()){
	        vector<int>res = *it;
	        if(res.size() == 0){
	             cout<<"("<<")";
	        }else{
    	        cout<<"(";
    	        int j = 0;
    	        for(j = 0; j <res.size()-1; j++)
    	            cout<<res[j]<<" ";
    	        cout<<res[j]<<")";
	        }
	        it++;
	    }
	    cout<<endl;
	}
	return 0;
}
