#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	int k;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cin>>k;
	    int len = INT_MIN;
	    int left = 0;
	    vector<int>hash(26,0);
	    int count = 0;
	    for(int i = 0; i < s.length(); i++){
	        if(hash[s[i]-'a'] == 0){
	            count++;
	        }
	        hash[s[i]-'a']++;
	        while(count > k && hash[s[left]-'a'] >= 1){
	            hash[s[left]-'a']--;
	            if(hash[s[left]-'a'] == 0){
	                count--;
	            }
	            left++;
	        }
	        if(count == k){
	            len = max(len,i-left+1);
	        }
	    }
	    len == INT_MIN ? cout<<-1<<endl :cout<<len<<endl;
	}
	return 0;
}
