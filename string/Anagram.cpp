#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int t;
	cin>>t;
	int flag;
	string s,T;
	while(t--){
	    cin>>s>>T;
	    flag = 1;
	    if(s.length() < T.length())flag = 0;
	    vector<int>vec(26,0);
	    for(int i = 0; i < s.length();i++){
	        vec[s[i]-'a']++;
	    }
	    for(int i = 0; i < T.length();i++){
	        vec[T[i]-'a']--;
	    }
	     for(int i = 0; i < 26;i++){
	         if(vec[i] != 0) {
	             flag = 0;
	             break;
	         }
	     }
	    if(flag) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	
	return 0;
}
