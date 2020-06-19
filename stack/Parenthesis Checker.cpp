#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    stack<char>st;
	    int flag = 1;
	    for(int i =0; i < s.length(); i++){
	        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
	            st.push(s[i]);
	        }else{
	            if(!st.empty()){
	                if( st.top() =='(' && s[i] == ')' ||
	                    st.top() =='{' && s[i] == '}' ||
	                    st.top() =='[' && s[i] == ']'){
	                        st.pop();
	                    }
	                    else{
	                        flag = 0;
	                        break;
	                    }
	            }else{
	                flag = 0;
	                break;
	            }
	        }
	    }
	    if(!st.empty()){
	        flag = 0;
	    }
	    flag == 1 ? cout<<"balanced"<<endl:cout<<"not balanced"<<endl;
	}
	return 0;
}
