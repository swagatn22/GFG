#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    vector<int>hash(26,0);
	    int left = 0;
	    int len = INT_MIN;
	    for(int i = 0; i< n; i++){
	        hash[s[i]-'a']++;
	        while(hash[s[i]-'a'] >= 2){
	            hash[s[left]-'a']--;
	            left++;
	        }
	        len = max(len,i-left+1);
	    }
	    cout<<len<<endl;
	}
	return 0;
}
