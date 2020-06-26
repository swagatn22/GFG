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
////////////////////////
running code
#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> M;
vector<string> res;
int maxLen = INT_MIN;
int x[] = {0,1,-1,0,1,-1,1,-1};
int y[] = {1,0,0,-1,1,-1,-1,1};

void dfs(vector<vector<char>> arr, vector<vector<int>> vis, int i, int j, int r, int c,string check){
    if(i >= r || i < 0 || j >= c || j < 0 || vis[i][j] == 1 || check.length() > maxLen) return;
    vis[i][j] = 1;
    check += arr[i][j];
    if(M.find(check) != M.end()) {
        res.push_back(check);
        M.erase(check);
    }
    for(int a = 0 ; a < 8; a++){
        dfs(arr, vis,i + x[a], j + y[a], r, c, check);
    }
    vis[i][j] = 0;
    return;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    M.clear();
	    res.clear();
	    maxLen = INT_MIN;
	    int n;
	    cin>>n;
	    string s;
	    set<char> first;
	    for(int i = 0; i < n ; i++){
	        cin>>s;
	        int q = s.length();
	        maxLen = max(maxLen, q);
	        first.insert(s[0]); 
	        M[s]++;
	    }
	    int r,c;
	    cin>>r>>c;
	    vector<vector<char>> arr(r, vector<char>(c, 0));
	    vector<vector<int>> visited(r, vector<int>(c, 0));
	    for(int i = 0 ; i < r; i++){
	        for(int j = 0 ; j < c; j++){
	            cin>>arr[i][j];
	        }
	    }
	    for(int i = 0 ; i < r; i++){
	        for(int j = 0 ; j < c; j++){
	            char l = arr[i][j];
	            if(first.find(l) != first.end()){
	                dfs(arr,visited, i, j, r, c, "");
	            }
	                
	        }
	    }
	    sort(res.begin(), res.end());
	    if(res.size() == 0) cout<<"-1";
	    for(int i = 0 ; i < res.size(); i++) cout<<res[i]<<" ";
	    cout<<endl;
	}
	return 0;
}

