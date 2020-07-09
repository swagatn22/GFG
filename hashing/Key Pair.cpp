#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n,sum;
	cin>>t;
	while(t--){
	    cin>>n>>sum;
	    vector<int>vec(n);
	    int num;
	    int flag = 0;
	    unordered_map<int,int>m;
	    for(int i = 0; i < n; i++){
	        cin>>vec[i];
	    }
	    for(int i = 0; i < n; i++){
	        if(m.find(sum-vec[i]) == m.end()){
	            m[vec[i]]++;
	        }else{
	            flag = 1;
	            break;
	        }
	    }
	    flag == 1?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	
	return 0;
}
