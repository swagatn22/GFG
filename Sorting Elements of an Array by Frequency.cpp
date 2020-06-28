#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>v1 , pair<int,int>v2){
    if(v1.second == v2.second){
        return v1.first < v2.first;
    }
    return v1.second > v2.second;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    vector<int>vec(n);
	    for(int i = 0;i< n;i++){
	        cin>>vec[i];
	    }
	    unordered_map<int,int>m;
	    vector<pair<int,int>>res;
	    for(int i =0 ;i <n;i++){
	        m[vec[i]]++;
	    }
	    for(auto it = m.begin(); it != m.end(); it++){
	        res.push_back(make_pair(it->first,it->second));
	    }
	    sort(res.begin(),res.end(),comp);
	    for(int i =0 ;i <res.size();i++){
	        while(res[i].second){
	            cout << res[i].first<< " ";
	            res[i].second--;
	        }
	    }
	    cout<<endl;
	    t--;
	    
	}
	return 0;
}
