#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> &a, pair<int,int> &b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first; 
}
int main()
 {
     int t;
     cin>>t;
     string s;
     cin.ignore();
     while(t--){
         getline(cin,s);
         unordered_map<string,int>m;
         vector<string>vec;
         string temp = "";
         for(int i =0;i <s.length(); i++){
             if(s[i] == ' '){
                  vec.push_back(temp);
                  temp = "";
             }else{
                 temp += s[i];
             }
         }
         vec.push_back(temp);
         for(int i = 0; i < vec.size(); i++){
             m[vec[i]]++;
         }
         vector<pair<int,int>>res;
         for(int i = 0; i < vec.size(); i++){
             res.push_back(make_pair(m[vec[i]],i));
         }
         sort(res.begin(),res.end(),comp);
         cout<<vec[res[0].second]<<" "<<res[0].first<<" "<<endl;
         
     }
	return 0;
}
