#include <bits/stdc++.h>
using namespace std;
bool comp(string s1, string s2){
    if(s1+s2 > s2+s1){
        return true;
    }
    return false;
}
int main() {
	//code
	int t;
	cin>>t;
	int n;
	while(t--){
	    cin>>n;
	    int no;
	    vector<string>vec;
	    for(int i=0; i < n; i++){
	        cin>>no;
	        vec.push_back(to_string(no));
	    }
	    sort(vec.begin(),vec.end(),comp);
	    for(int i = 0; i < n; i++){
	        cout<<vec[i];
	    }
	    cout<<endl;
	}
	return 0;
}
