#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	string num;
	getline(cin,num);
	int t=stoi(num);
	string s; 
	while(t--){
	    getline(cin,s);
	    string temp = "";
	    unordered_map<char,int>m;
	    for(int i = 0; i < s.length(); i++){
	        if(m.find(tolower(s[i])) == m.end()){
	            m[tolower(s[i])] = 1;
	            temp += s[i];
	        }else{
	            m.erase(tolower(s[i]));
	        }
	    }
	    cout<<temp<<endl; 
	}
	return 0;
}
