#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	string s1;
	string s2;
	while(t--){
	    cin>>s1>>s2;
	    int m = s1.length();
	    int n = s2.length();
	    vector<int>v1(26,0);
	    vector<int>v2(26,0);
	    int i = 0;
	    int j = 0;
	    while(i < n){
	        v2[s2[i]-'a']++;
	        v1[s1[i]-'a']++;
	        i++;
	    }
	    int count = 0;
	    int start = 0;
	    while(i < m){
	        if(v1 == v2){
	            count++;
	        }
	        v1[s1[i]-'a']++;
	        v1[s1[start]-'a']--;
	        i++;
	        start++;
	    }
	    if(v1 == v2)
	        count++;
	    cout<<count<<endl;
	}
	return 0;
}
