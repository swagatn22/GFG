#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    string s = "!#$%&*@^~";
	    char N,B;
	    vector<char>res;
	    unordered_map<char,int>nut;
	    unordered_map<char,int>bolt;
	    for(int i = 0; i < n; i++){
	        cin>>N;
	        nut[N]++;
	    }
	    for(int i = 0; i < n; i++){
	        cin>>B;
	        bolt[B]++;
	    }
	    for(int i = 0; i < s.length(); i++){
	        if(nut.find(s[i]) != nut.end() && bolt.find(s[i]) != bolt.end()){
	           res.push_back(s[i]);
	        }
	    }
	    for(int i = 0; i < res.size(); i++){
	        cout<<res[i]<<" ";
	    }
	    cout<<endl;
	    for(int i = 0; i < res.size(); i++){
	        cout<<res[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
