#include <bits/stdc++.h>
using namespace std;
const int MAX = 10;
void dfs(int x,int y, int n, int m, char vec[MAX][MAX], int &count, string s){
    if(x >= n || y >= m){
        return;
    }
    s += vec[x][y];
    if(x == n-1 && y == m-1){
        string r = s;
        reverse(r.begin(),r.end());
        if(s == r){
            count++;
        }
        //return;
    }
    dfs(x+1,y,n,m,vec,count,s);
    dfs(x,y+1,n,m,vec,count,s);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char vec[MAX][MAX];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m;j++){
                cin>>vec[i][j];
            }
        }
        int count = 0;
        string s = "";
        dfs(0,0,n,m,vec,count,s);
        cout<<count<<endl;
    }
	return 0;
}
