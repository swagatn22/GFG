void dfs(int A[SIZE][SIZE],int i,int j,int N, int M,int &area){
    if(i < 0 || j < 0 || i >= N || j >= M || A[i][j] != 1){
        return;
    }
    area += A[i][j];
    A[i][j] = -1;
    dfs(A,i+1,j,N,M,area);
    dfs(A,i-1,j,N,M,area);
    dfs(A,i,j+1,N,M,area);
    dfs(A,i,j-1,N,M,area);
    dfs(A,i-1,j-1,N,M,area);
    dfs(A,i-1,j+1,N,M,area);
    dfs(A,i+1,j+1,N,M,area);
    dfs(A,i+1,j-1,N,M,area);
}
int findMaxArea(int N, int M, int A[SIZE][SIZE] )
{
   int ans = 0;
   int area = 0;
   for(int i = 0; i < N; i++){
       for(int j = 0; j < M; j++){
          area = 0;
          if(A[i][j] == 1){
              dfs(A,i,j,N,M,area);
              ans = max(ans,area);
          }
       }
   }
   return ans;
}
