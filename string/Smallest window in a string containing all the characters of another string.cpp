#include<bits/stdc++.h>
using namespace std;
string solve(string s,string t){
    int help[26] = {0};
    int small[26] = {0};
    int n = s.length();
    int len = t.length();
    for(int i = 0; i < len; i++){
        small[t[i]-'a']++;
    }
    int count = 0;
    int left = 0;
    int start = -1;
    int end = 0;
    int s_len = INT_MAX;
    for(int i = 0; i < n; i++){
        help[s[i]-'a']++;
        if(help[s[i]-'a'] <= small[s[i]-'a']){
            count++;
        }
        if(count == len){
            while(help[s[left]-'a'] > small[s[left]-'a']){
                help[s[left]-'a']--;
                left++;
            }
            if(i-left+1 < s_len){
                s_len = i-left+1;
                start = left;
                end = i;
            }
        }
    }
    if(start == -1){
        return "-1";
    }
    string ans = "";
    for(int i = start; i<=end; i++){
        ans += s[i];
    }
    return ans;
}
int main()
 {
	//code
	int t;
	int n;
	cin>>t;
	while(t--){
	    string S,T;
	    cin>>S>>T;
	    cout<<solve(S,T)<<endl;
	}
	return 0;
}
