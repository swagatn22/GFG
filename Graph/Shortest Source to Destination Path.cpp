using namespace std;
int is_valid(int x, int y, int n, int m,vector<vector<bool>>visited){
    if(x >= 0 && x < n && y >= 0 && y < m && visited[x][y] == false)
        return 1;
    return 0;
}
int minDistance(vector<vector<int>>&mat,int x,int y,int N,int M)
{
    if(mat[0][0] == 0 || mat[x][y]==0){
        return -1;
    }
    if(x == 0 && y == 0)
        return 0;
    vector<vector<bool>>visited(N,vector<bool>(M,false));
    queue<pair<int,int>>q;
    int distance = 0;
    visited[0][0] = true;
    q.push({0,0});
    int dx[] = {-1,0,1,0};
    int dy[] = {0,1,0,-1};
    while(!q.empty()){
        int size = q.size();
        distance ++;
        while(size--){
            pair<int,int> v = q.front();
            q.pop();
            for(int i = 0; i < 4; i++){
                int r = v.first + dx[i];
                int c = v.second + dy[i];
                if(r == x && c == y){
                    return distance;
                }
                if(is_valid(r,c,N,M,visited) && mat[r][c] == 1){
                       visited[r][c] = 1;
                       q.push({r,c});
                }
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
        cin>>N>>M;
        vector<vector<int>>mat(N,vector<int>(M));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                cin>>mat[i][j];
            }
        }
        int x,y;
        cin>>x>>y;
        cout<<minDistance(mat,x,y,N,M)<<endl;
    }
    return 0;
}
