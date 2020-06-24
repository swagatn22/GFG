#include<bits/stdc++.h>
using namespace std;
void dfs(int i,int j,vector<vector<char>>mat,int n,int m,vector<vector<int>>&visit,unordered_map<string,int>&map,string res,int len,vector<string>&ans){
    if(i < 0 || j < 0 || i >= n || j >= m || visit[i][j] == 1 || res.length() > len){
        return;
    }
    res += mat[i][j];
    if(map.find(res) != map.end()){
        ans.push_back(res);
        map.erase(res);
    }
    visit[i][j] = 1;
    dfs(i+1,j,mat,n,m,visit,map,res,len,ans);
    dfs(i+1,j-1,mat,n,m,visit,map,res,len,ans);
    dfs(i+1,j+1,mat,n,m,visit,map,res,len,ans);
    dfs(i-1,j,mat,n,m,visit,map,res,len,ans);
    dfs(i-1,j-1,mat,n,m,visit,map,res,len,ans);
    dfs(i-1,j+1,mat,n,m,visit,map,res,len,ans);
    dfs(i,j-1,mat,n,m,visit,map,res,len,ans);
    dfs(i,j+1,mat,n,m,visit,map,res,len,ans);
    visit[i][j] = 0;
}
int main()
 {
	int t;
	int x;
	cin>>t;
	while(t--){
	    cin>>x;
	    unordered_map<string,int>map;
	    int len = INT_MIN;
	    string s;
	    set<char>st;
	    for(int i = 0; i < x; i++){
	        cin>>s;
	        map[s]++;
	        st.insert(s[0]);
	        int l = s.length();
	        len = max(len,l);
	    }
	    int n,m;
	    cin>>n>>m;
	    vector<vector<char>>mat(n,vector<char>(m));
	    for(int i = 0; i < n; i++){
	        for(int j = 0;j < m; j++){
	            cin>>mat[i][j];
	        }
	    }
	   vector<vector<int>>visit(n,vector<int>(m,0));
	   vector<string>ans;
	   for(int i = 0; i < n; i++){
	        for(int j = 0;j < m; j++){
	            if(st.find(mat[i][j]) != st.end()){
	                dfs(i,j,mat,n,m,visit,map,"",len,ans);
	            }
	        }
	    }
	    sort(ans.begin(),ans.end());
	    if(ans.size() == 0){
	        cout<<-1<<endl;
	    }
	    for(int i = 0; i< ans.size(); i++){
	        cout<<ans[i]<<" ";
	    }
	   cout<<endl;
	}
	return 0;
}
