#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int len;
	while(t--){
	    string s;
	    cin>>s;
	    vector<int>hash(26,0);
	    int count = 0;
	    int ans = 0;
	    int left = 0;
	    for(int i = 0; i < s.length();i++){
	         hash[s[i]-'a']++;
	         while(hash[s[i]-'a'] >= 2){
	             hash[s[left]-'a']--;
	             left++;
	         }
	        ans = max(ans,i-left+1);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
