#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	int n;
	cin>>t;
	int num;
	while(t--){
	    cin>>n;
	    vector<int>vec;
	    unordered_map<int,int>m;
	    for(int i =0; i < n; i++){
	        cin>>num;
	        if(num < 0){
	            m[num]++;
	        }else{
	            vec.push_back(num);
	        }
	    }
	    sort(vec.begin(),vec.end());
	    int flag = 0;
	    for(int i = 0; i < vec.size(); i++){
	        if(m.find(-vec[i]) != m.end()){
	            cout<<-vec[i]<<" "<<vec[i]<<" ";
	            flag = 1; 
	        }
	    }
	    if(!flag)cout<<0;
	    cout<<endl;
	}
	return 0;
}
