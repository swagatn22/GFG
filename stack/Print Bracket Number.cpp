#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     string s;
     while(t--){
         cin>>s;
         stack<pair<char,int>>st;
         int left = 1;
         int right = 1;
         for(int i = 0; i  < s.length();i++){
             if(s[i] == '('){
                 cout<<left<<" ";
                 st.push({'(',left++});
             }
             if(s[i] == ')'){
                 cout<<st.top().second<<" ";
                 st.pop();
             }
         }
         cout<<endl;
     }
	//code
	return 0;
}
