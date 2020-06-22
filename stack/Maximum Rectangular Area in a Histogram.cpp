#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
void NSL(vector<int>&nsl,vector<lli>v, int n){
    stack<pair<lli,int>>s;
    s.push(make_pair(v[0],0));
    nsl[0] = -1;
    for(int i = 1; i< n; i++){
        if(!s.empty() && s.top().first < v[i]){
            nsl[i] = s.top().second;
            s.push({v[i],i});
        }else{
            while(!s.empty() && s.top().first >= v[i]){
                s.pop();
            }
            if(s.empty()){
                nsl[i] = -1;
            }else{
                nsl[i] = s.top().second;
            }
            s.push({v[i],i});
        }
    }
}
void NSR(vector<int>&nsr,vector<lli>v, int n){
    stack<pair<lli,int>>s;
    s.push({v[n-1],n-1});
    nsr[n-1] = n;
    for(int i = n-2; i >= 0; i--){
        if(!s.empty() && s.top().first < v[i]){
            nsr[i] = s.top().second;
            s.push({v[i],i});
        }else{
            while(!s.empty() && s.top().first >= v[i]){
                s.pop();
            }
            if(s.empty()){
                nsr[i] = n;
            }else{
                nsr[i] = s.top().second;
            }
            s.push({v[i],i});
        }
    }
}
int main()
 {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<lli>v(n);
	    for(int i = 0; i < n; i++){
	        cin>>v[i];
	    }
	    vector<int>nsl(n);
	    NSL(nsl,v,n);
	    vector<int>nsr(n);
	    NSR(nsr,v,n);
	    lli ans = 0;
	    vector<int>w(n);
	    for(int i = 0; i < n; i++){
	        w[i] = nsr[i]-nsl[i]-1;
	    }
	    vector<lli>area(n);
	    for(int i = 0; i < n; i++){
	        area[i] = w[i]*v[i];
	    }
	    cout<<*max_element(area.begin(),area.end())<<endl;
	}
	return 0;
}
