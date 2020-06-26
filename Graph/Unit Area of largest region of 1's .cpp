void dfs(int A[SIZE][SIZE],int i,int j,int N, int M,int &area,int &ans){
    if(i < 0 || j < 0 || i >= N || j >= M || A[i][j] != 1){
        return;
    }
    area += A[i][j];
    ans = max(ans,area);
    A[i][j] = -1;
    dfs(A,i+1,j,N,M,area,ans);
    dfs(A,i-1,j,N,M,area,ans);
    dfs(A,i,j+1,N,M,area,ans);
    dfs(A,i,j-1,N,M,area,ans);
    dfs(A,i-1,j-1,N,M,area,ans);
    dfs(A,i-1,j+1,N,M,area,ans);
    dfs(A,i+1,j+1,N,M,area,ans);
    dfs(A,i+1,j-1,N,M,area,ans);
}
int findMaxArea(int N, int M, int A[SIZE][SIZE] )
{
   int ans = 0;
   int area = 0;
   for(int i = 0; i < N; i++){
       for(int j = 0; j < M; j++){
          area = 0;
          if(A[i][j] == 1){
              dfs(A,i,j,N,M,area,ans);
          }
       }
   }
   return ans;
}
