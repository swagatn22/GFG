#include<bits/stdc++.h>
using namespace std;
int main()
 {
     string s;
     int t;
     cin>>t;
     while(t--){
         cin>>s;
         int sum = 0;
         int max_sum = 0;
         for(int i = 0; i < s.length();i++){
             if(s[i] == '1'){
                 sum = max(sum-1,-1);
             }else{
                 sum = max(sum+1,1);
             }
             if(sum < 0){
                 sum = 0;
             }
             max_sum = max(max_sum,sum);
         }
         max_sum == 0 ? cout<<-1<<endl : cout<<max_sum<<endl;
     }
	//code
	return 0;
}
