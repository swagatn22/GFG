void dfs(int m[MAX][MAX],int i, int j,int n,vector<string>&res,string path){
    if(i < 0 || j < 0 || i >= n || j >= n || m[i][j] != 1){
        return;
    }
    if(i == n-1 && j == n-1){
        res.push_back(path);
    }
    m[i][j] = -1;
    dfs(m,i+1,j,n,res,path+'D');
    dfs(m,i-1,j,n,res,path+'U');
    dfs(m,i,j+1,n,res,path+'R');
    dfs(m,i,j-1,n,res,path+'L');
    m[i][j] = 1;
}
vector<string> printPath(int m[MAX][MAX], int n) {
    vector<string>res;
    vector<vector<int>>visit(n,vector<int>(n,0));
    string path = "";
    dfs(m,0,0,n,res,path);
    sort(res.begin(),res.end());
    return res;
}
