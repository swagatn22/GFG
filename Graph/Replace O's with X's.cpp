#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>>&mat, int i, int j, int n,int m){
    if(i < 0 || j < 0 || i >= n|| j >= m || mat[i][j] != 'O'){
        return;
    }
    mat[i][j] ='#';
    dfs(mat,i-1,j,n,m);
    dfs(mat,i+1,j,n,m);
    dfs(mat,i,j-1,n,m);
    dfs(mat,i,j+1,n,m);
}
int main()
 {
     int t;
     int n,m;
     cin>>t;
     while(t--){
         cin>>n>>m;
         vector<vector<char>>mat(n,vector<char>(m));
         for(int i = 0;i < n; i++){
             for(int j = 0; j < m; j++){
                 cin>>mat[i][j];
             }
         }
         for(int j = 0; j < m; j++){
             if(mat[0][j] == 'O'){
                 dfs(mat,0,j,n,m);
             }
             if(mat[n-1][j] == 'O'){
                 dfs(mat,n-1,j,n,m);
             }
         }
          for(int i = 0;i < n; i++){
             if(mat[i][0] == 'O'){
                 dfs(mat,i,0,n,m);
             }
             if(mat[i][m-1] == 'O'){
                 dfs(mat,i,m-1,n,m);
             }
         }
         for(int i = 0;i < n; i++){
             for(int j = 0; j < m; j++){
                 if(mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
                if(mat[i][j] == '#'){
                    mat[i][j] = 'O';
                }
             }
         }
         for(int i = 0;i < n; i++){
             for(int j = 0; j < m; j++){
                 cout<<mat[i][j]<<" ";
             }
         }
         cout<<endl;
     }
	//codevec
	return 0;
}
