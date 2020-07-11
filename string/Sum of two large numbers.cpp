#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     string x,y;
     while(t--){
         cin>>x>>y;
         string res = "";
         int i = x.length()-1;
         int j = y.length()-1;
         int carry = 0;
         int sum = 0;
         while(i >= 0 || j >= 0 || carry != 0){
             if(i >= 0) sum += x[i--]-'0';
             if(j >= 0) sum += y[j--]-'0';
             sum += carry;
             carry = sum/10;
             res = to_string(sum%10)+res;
             sum = 0;
         }
         res.length() == x.length() ? cout<<res<<endl: cout<<x<<endl;
     }
	//code
	return 0;
}
